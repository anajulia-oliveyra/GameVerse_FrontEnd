
using System.Net.Http.Json;
using GameVerse.FrontEnd.Services;

namespace GameVerse.FrontEnd.Clients
{
    public class AuthClient
    {
        private readonly HttpClient httpClient;
        private readonly LocalStorageService _localStorageService;
        private const string BaseUrl = "http://gameverse.runasp.net/auth";

        public AuthClient(HttpClient httpClient, LocalStorageService localStorageService)
        {
            this.httpClient = httpClient;
            this.localStorageService = localStorageService;
        }

        public record AuthData(string Email, string Password);

        public record AuthResponse(string Token, string? UserId); 

        public async Task<AuthResponse> SignInAsync(string email, string password)
        {
            var data = new AuthData(email, password);
            var response = await httpClient.PostAsJsonAsync($"{BaseUrl}/signin", data);
            response.EnsureSuccessStatusCode(); 
            
            var authResponse = await response.Content.ReadFromJsonAsync<AuthResponse>()
                ?? throw new InvalidOperationException("Não foi possível desserializar a resposta de signin.");
            
            return authResponse;
        }

        public async Task<AuthResponse> LoginAsync(string email, string password)
        {
            var data = new AuthData(email, password);
            var response = await httpClient.PostAsJsonAsync($"{BaseUrl}/login", data);

            response.EnsureSuccessStatusCode();

            var authResponse = await response.Content.ReadFromJsonAsync<AuthResponse>()
                ?? throw new InvalidOperationException("Não foi possível desserializar a resposta de login.");
            await _localStorageService.SetToken(authResponse.Token); 
            
            return authResponse;
        }
        
        public async Task LogoutAsync()
        {
             await _localStorageService.RemoveToken();
             // Adicionar mais lógica de logout, como redefinir o estado de autenticação.
        }
    }
}