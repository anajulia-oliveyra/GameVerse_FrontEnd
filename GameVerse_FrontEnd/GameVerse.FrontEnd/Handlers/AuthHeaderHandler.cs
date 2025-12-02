// Handlers/AuthHeaderHandler.cs
using GameVerse.FrontEnd.Services;
using System.Net.Http.Headers;
using System.Threading;
using System.Threading.Tasks;

namespace GameVerse.FrontEnd.Handlers
{
    // DelegatingHandler é a classe base para handlers que interceptam o pipeline HTTP
    public class AuthHeaderHandler : DelegatingHandler
    {
        private readonly LocalStorageService _localStorageService;

        // O LocalStorageService (do Passo 1) é injetado para que possamos ler o token
        public AuthHeaderHandler(LocalStorageService localStorageService)
        {
            _localStorageService = localStorageService;
        }

        // Este método é chamado para CADA requisição HTTP de saída que usa este handler
        protected override async Task<HttpResponseMessage> SendAsync(HttpRequestMessage request, CancellationToken cancellationToken)
        {
            // 1. Recupera o token de forma assíncrona do Local Storage
            var token = await _localStorageService.GetToken();

            // 2. Se o token existir, anexa ele ao cabeçalho da requisição
            if (!string.IsNullOrEmpty(token))
            {
                // Define o cabeçalho Authorization no formato padrão "Bearer <token>"
                request.Headers.Authorization = new AuthenticationHeaderValue("Bearer", token);
            }

            // 3. Permite que a requisição continue seu caminho normal
            return await base.SendAsync(request, cancellationToken);
        }
    }
}