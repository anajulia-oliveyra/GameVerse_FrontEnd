using System.Net.Http.Headers;
using GameVerse.FrontEnd.Services;

namespace GameVerse.FrontEnd
{
    public class TokenHandler : DelegatingHandler
    {
        private readonly LocalStorageService _localStorage;

        public TokenHandler(LocalStorageService localStorage)
        {
            _localStorage = localStorage;
        }

        protected override async Task<HttpResponseMessage> SendAsync(
            HttpRequestMessage request, CancellationToken cancellationToken)
        {
            string? token = await _localStorage.GetToken();

            if (!string.IsNullOrWhiteSpace(token))
            {
                request.Headers.Authorization =
                    new AuthenticationHeaderValue("Bearer", token);
            }

            return await base.SendAsync(request, cancellationToken);
        }
    }
}
