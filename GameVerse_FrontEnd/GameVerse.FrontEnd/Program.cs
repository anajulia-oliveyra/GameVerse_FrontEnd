using GameVerse.FrontEnd.Clients;
using GameVerse.FrontEnd.Components;
using GameVerse.FrontEnd.Services;
using Microsoft.AspNetCore.Components.Authorization;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;

namespace GameVerse.FrontEnd
{
    public class Program
    {
        public static async Task Main(string[] args)
        {
            WebAssemblyHostBuilder builder = WebAssemblyHostBuilder.CreateDefault(args);
            builder.RootComponents.Add<App>("#app");
            builder.RootComponents.Add<HeadOutlet>("head::after");

            builder.Services.AddAuthorizationCore();
            builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
            builder.Services.AddScoped<GamesClient>();
            builder.Services.AddScoped<AuthClient>();
            builder.Services.AddScoped<LocalStorageService>();
            builder.Services.AddScoped<AuthenticationStateProvider, AuthStateProvider>();
            builder.Services.AddScoped<AuthStateProvider>();
            builder.Services.AddScoped<PaymentService>();


            await builder.Build().RunAsync();
        }
    }
}
