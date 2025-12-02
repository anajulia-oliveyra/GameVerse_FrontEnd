using Microsoft.JSInterop;

namespace GameVerse.FrontEnd.Services
{
    public class LocalStorageService
    {
        private readonly IJSRuntime _jsRuntime;
        private const string AuthTokenKey = "authToken";

        public LocalStorageService(IJSRuntime jsRuntime)
        {
            _jsRuntime = jsRuntime;
        }

        public async Task SetToken(string token)
        {
            await _jsRuntime.InvokeVoidAsync("localStorage.setItem", AuthTokenKey, token);
        }
        public async Task<string?> GetToken()
        {
            return await _jsRuntime.InvokeAsync<string?>("localStorage.getItem", AuthTokenKey);
        }
        public async Task RemoveToken()
        {
            await _jsRuntime.InvokeVoidAsync("localStorage.removeItem", AuthTokenKey);
        }
    }
}