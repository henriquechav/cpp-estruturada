#include <iostream>
using namespace std;

int main()
{
    const char *months[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    cout << "Digite o número de livros vendidos:\n";
    unsigned sold[12];
    for (int i = 0; i < 12; i++) {
        cout << months[i] << ": ";
        cin >> sold[i];
    }

    // calculando a quantidade total de livros vendidos
    unsigned totalSold = 0;
    for (int i = 0; i < 12; i++)
        totalSold = totalSold + sold[i];

    cout << "\nEm um ano foram vendidos " << totalSold << " livros.\n\n";

    return 0;
}
