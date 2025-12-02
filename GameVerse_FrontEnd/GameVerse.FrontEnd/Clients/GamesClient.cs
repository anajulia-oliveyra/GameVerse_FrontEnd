using System.Net.Http.Json;
using GameVerse.FrontEnd.Models;
using System.Net.Http;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace GameVerse.FrontEnd.Clients
{
    public class GamesClient
    {
        private readonly HttpClient _httpClient;
        private const string BaseUrl = "http://gameverse.runasp.net/games";

        private List<GameSummary> _purchased = new();

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

        // --- Métodos usados pelos componentes (adicionei agora) ---

        public async Task<GameSummary?> GetByIdAsync(int id)
        {
            return await _httpClient.GetFromJsonAsync<GameSummary>($"{BaseUrl}/{id}");
        }

        public List<GameSummary> GetPurchasedGames() => _purchased;

        public void BuyGame(GameSummary game)
        {
            if (!_purchased.Any(g => g.Id == game.Id))
                _purchased.Add(game);
        }
    }
}
