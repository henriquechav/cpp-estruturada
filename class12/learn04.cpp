#include <iostream>
using namespace std;

struct book
{
    char title[20];
    char author[20];
    char publicationDate[11];
    float price;
};

struct game
{
    char title[20];
    char publisher[20];
    char releaseDate[11];
    float price;
};

int main()
{
    book lendedBooks[5];
    game lendedGames[5];

    int option;
    cout << "Digite o número do que você quer emprestado.\n";
    cout << "[0] Jogo\n";
    cout << "[1] Livro\n";
    cin >> option;

    if (option == 0) 
    {
        cout << "\nDigite as informações do jogo...\n\n";
    } else 
    {
        cout << "\nDigite as informações do livro...\n\n";
    }

    return 0;
}
