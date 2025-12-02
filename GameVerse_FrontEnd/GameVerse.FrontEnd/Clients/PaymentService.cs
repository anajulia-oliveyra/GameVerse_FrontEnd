using GameVerse.FrontEnd.Models;

namespace GameVerse.FrontEnd.Clients;


public class PaymentService
{
    private readonly List<Purchase> _purchases = new();

    public async Task<bool> ProcessPayment(Purchase purchase)
    {
        await Task.Delay(1500);

        purchase.Id = _purchases.Count + 1;
        _purchases.Add(purchase);

        return true;
    }

    public IEnumerable<Purchase> GetAll() => _purchases;
}
