using GameVerse.FrontEnd.Models;

namespace GameVerse.FrontEnd.Clients;
public class GamesClient
{
    private readonly List<GameSummary> games =
    [
    new(){
        Id=1,
        Name="Kirby’s Return to Dream Land",
        Genre = "Platform",
        Price = 349.00M,
        ReleaseDate = new DateOnly(2023,02,24)

    },
    new(){
        Id=2,
        Name="Stardew Valley",
        Genre = "Rural Simulator",
        Price = 24.99M,
        ReleaseDate = new DateOnly(2016,02,26)

    },
    new(){
        Id = 3,
        Name = "Red Dead Redemption 2",
        Genre = "Open World",
        Price= 299.90M,
        ReleaseDate = new DateOnly(2019,12,05)
    },
    new(){
        Id = 4,Genre= "Sports",Name ="EA SPORTS FC™ 26",Price = 299.90M,ReleaseDate = new DateOnly(2025,09,25)
    },
    new(){
         Id = 5,Genre= "Open World",Name ="Tunic",Price = 49.49M,ReleaseDate = new DateOnly(2022,03,16)
    },
    new(){
         Id = 6,Genre= "Adventure",Name ="Hello Kitty Island Adventure",Price = 110.58M,ReleaseDate = new DateOnly(2025,01,30)
    },
    new(){
        Id=7,Genre="Adventure",Name="Sonic Frontiers", Price=57.80M,ReleaseDate = new DateOnly(2022,11,08)
    },
    new(){
        Id=8,Genre="Terror",Name="Phasmophobia",Price=59.99M,ReleaseDate=new DateOnly(2020,09,18)
    },
    new(){
        Id=9,Genre="Puzzle",Name="Buckshot Roulette",Price=9.99M,ReleaseDate=new DateOnly(2024,04,04)
    }
    ];

    private readonly Genre[] genres = new GenresClient().GetGenres();

    private readonly List<int> purchasedGameIds = new();

    public void BuyGame(int gameId)
    {
        var game = games.SingleOrDefault(g => g.Id == gameId);
        if (game == null)
            throw new ArgumentException("Jogo não encontrado.");

        if (purchasedGameIds.Contains(gameId))
            throw new InvalidOperationException("Jogo já comprado.");

        purchasedGameIds.Add(gameId);
        Console.WriteLine($"Jogo comprado: {game.Name} por {game.Price:C2}");
    }

    public GameSummary[] GetPurchasedGames()
    {
        return games.Where(g => purchasedGameIds.Contains(g.Id)).ToArray();
    }

    public GameSummary[] GetGames() => games.ToArray();

    public void addGame(GameDetails game)
{
    if (string.IsNullOrWhiteSpace(game.GenreId))
        throw new ArgumentException("GenreId não pode ser nulo ou vazio.");

    var genre = genres.Single(g => g.Id == int.Parse(game.GenreId));

    var gameSummary = new GameSummary
    {
        Id = games.Count + 1,
        Name = game.Name,
        Genre = genre.Name,
        Price = game.Price,
        ReleaseDate = game.ReleaseDate
    };

    games.Add(gameSummary);
}

}