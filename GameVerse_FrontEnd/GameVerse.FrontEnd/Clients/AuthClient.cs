using System.Net.Http.Json;
using GameVerse.FrontEnd.Services;
using Microsoft.AspNetCore.Components.Authorization;

namespace GameVerse.FrontEnd.Clients
{
    public class AuthClient
    {
        private readonly HttpClient _httpClient;
        private readonly LocalStorageService _localStorageService;
        private readonly AuthStateProvider _authStateProvider;
        
        private const string BaseUrl = "https://gameverse.runasp.net/auth";

        public record AuthData(string Email, string Password);
        public record AuthResponse(string Token, string? UserId); 

        public AuthClient(HttpClient httpClient, LocalStorageService localStorageService, 
                          AuthenticationStateProvider authStateProvider)
        {
            _httpClient = httpClient;
            _localStorageService = localStorageService;
            _authStateProvider = (AuthStateProvider)authStateProvider;
        }
        public async Task<AuthResponse> SignInAsync(string email, string password)
        {
            var data = new AuthData(email, password);
            HttpResponseMessage response = await _httpClient.PostAsJsonAsync($"{BaseUrl}/signin", data);

            response.EnsureSuccessStatusCode(); 
            
            var authResponse = await response.Content.ReadFromJsonAsync<AuthResponse>()
                ?? throw new InvalidOperationException("Não foi possível desserializar a resposta de signin.");
            
            return authResponse;
        }

        public async Task<AuthResponse> LoginAsync(string email, string password)
        {
            var data = new AuthData(email, password);
            HttpResponseMessage response = await _httpClient.PostAsJsonAsync($"{BaseUrl}/login", data);

            response.EnsureSuccessStatusCode();

            var authResponse = await response.Content.ReadFromJsonAsync<AuthResponse>()
                ?? throw new InvalidOperationException("Não foi possível desserializar a resposta de login.");
            await _localStorageService.SetToken(authResponse.Token); 

            _authStateProvider.NotifyAuthenticationStateChanged();
            
            return authResponse;
        }

        public async Task LogoutAsync()
        {
             await _localStorageService.RemoveToken();
             _authStateProvider.NotifyAuthenticationStateChanged();
        }
    }
}