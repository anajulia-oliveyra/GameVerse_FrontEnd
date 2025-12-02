using System.Net.Http.Json;
using GameVerse.FrontEnd.Models;

namespace GameVerse.FrontEnd.Clients
{
    public class GamesClient
    {
        private readonly HttpClient _httpClient;
        private const string BaseUrl = "games";
        private const string UserGamesUrl = "user/games";

        public GamesClient(HttpClient httpClient)
        {
            _httpClient = httpClient;
        }

        public async Task<List<GameSummary>> GetGamesAsync()
        {
            return await _httpClient.GetFromJsonAsync<List<GameSummary>>(BaseUrl)
                   ?? new List<GameSummary>();
        }

        public async Task<GameDetails?> GetGameByIdAsync(int id)
        {
            return await _httpClient.GetFromJsonAsync<GameDetails>($"{BaseUrl}/{id}");
        }

        public async Task CreateGameAsync(GameDetails newGame)
        {
            var response = await _httpClient.PostAsJsonAsync(BaseUrl, newGame);
            response.EnsureSuccessStatusCode();
        }

        public async Task UpdateGameAsync(int id, GameDetails updatedGame)
        {
            var response = await _httpClient.PutAsJsonAsync($"{BaseUrl}/{id}", updatedGame);
            response.EnsureSuccessStatusCode();
        }

        public async Task DeleteGameAsync(int id)
        {
            var response = await _httpClient.DeleteAsync($"{BaseUrl}/{id}");
            response.EnsureSuccessStatusCode();
        }

        public async Task<GameSummary?> GetByIdAsync(int id)
        {
            return await _httpClient.GetFromJsonAsync<GameSummary>($"{BaseUrl}/{id}");
        }

        // -------------------- User Games --------------------

        public async Task<List<GameSummary>> GetUserGamesAsync(string? targetUserId = null)
        {
            string url = targetUserId != null ? $"{UserGamesUrl}/{targetUserId}" : UserGamesUrl;
            return await _httpClient.GetFromJsonAsync<List<GameSummary>>(url)
                   ?? new List<GameSummary>();
        }

        public async Task BuyGame(int gameId)
        {
            var content = new { GameId = gameId };
            var response = await _httpClient.PostAsJsonAsync(UserGamesUrl, content);
            response.EnsureSuccessStatusCode();
        }

        public async Task RemoveUserGameAsync(int gameId)
        {
            var response = await _httpClient.DeleteAsync($"{UserGamesUrl}/{gameId}");
            response.EnsureSuccessStatusCode();
        }
    }
}
