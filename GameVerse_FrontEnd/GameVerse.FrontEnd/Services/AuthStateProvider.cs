using System.Security.Claims;
using System.Text.Json;
using Microsoft.AspNetCore.Components.Authorization;
using Microsoft.AspNetCore.Components.webAuthorization

namespace GameVerse.FrontEnd.Services
{
    public class AuthStateProvider : AuthenticationStateProvider
    {
        private readonly LocalStorageService _localStorageService;
        private readonly HttpClient _httpClient;
        private readonly AuthenticationState anonymous = new(new ClaimsPrincipal(new ClaimsIdentity()));

        public AuthStateProvider(LocalStorageService localStorageService, HttpClient httpClient)
        {
            _localStorageService = localStorageService;
            _httpClient = httpClient;
        }

        public override async Task<AuthenticationState> GetAuthenticationStateAsync()
        {
            var token = await _localStorageService.GetToken();
            
            if (string.IsNullOrEmpty(token))
            {
                return anonymous;
            }

            _httpClient.DefaultRequestHeaders.Authorization = 
                new System.Net.Http.Headers.AuthenticationHeaderValue("Bearer", token);

            return new AuthenticationState(new ClaimsPrincipal(
                new ClaimsIdentity(ParseClaimsFromJwt(token), "jwtAuthType")));
        }
        private static IEnumerable<Claim> ParseClaimsFromJwt(string jwt)
        {
            var claims = new List<Claim>();
            var payload = jwt.Split('.')[1]; 
            
            var jsonBytes = ParseBase64WithoutPadding(payload);
            var keyValuePairs = JsonSerializer.Deserialize<Dictionary<string, object>>(jsonBytes);

            if (keyValuePairs != null)
            {
                if (keyValuePairs.TryGetValue(ClaimTypes.Role, out var role))
                {
                    if (role is JsonElement roleElement && roleElement.ValueKind == JsonValueKind.Array)
                    {
                        var parsedRoles = roleElement.Deserialize<string[]>();
                        claims.AddRange(parsedRoles.Select(r => new Claim(ClaimTypes.Role, r)));
                    }
                    else if (role != null)
                    {
                        claims.Add(new Claim(ClaimTypes.Role, role.ToString()!));
                    }
                    keyValuePairs.Remove(ClaimTypes.Role);
                }
                claims.AddRange(keyValuePairs.Select(kvp => new Claim(kvp.Key, kvp.Value.ToString()!)));
            }

            return claims;
        }

        private static byte[] ParseBase64WithoutPadding(string base64)
        {
            switch (base64.Length % 4)
            {
                case 2: base64 += "=="; break;
                case 3: base64 += "="; break;
            }
            return Convert.FromBase64String(base64);
        }
        public void NotifyAuthenticationStateChanged()
        {
            var authState = GetAuthenticationStateAsync();
            NotifyAuthenticationStateChanged(authState);
        }
    }
}