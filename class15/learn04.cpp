#include <iostream>
using namespace std;

struct place
{
    char name[20];
    char country[20];
    char continent[20];
};

int main()
{
    cout << "Quantos lugares você quer visitar nas férias? ";
    unsigned amount;
    cin >> amount;
    cin.ignore();

    place *places = new place [amount];

    cout << "Digite o nome, país e continente dos lugares:\n";
    for (int i = 0; i < amount; i++) {
        cout << (i+1) << ".\n";
        cout << "\tNome: ";
        cin.getline(places[i].name, 20);
        cout << "\tPaís: ";
        cin.getline(places[i].country, 20);
        cout << "\tContinente: ";
        cin.getline(places[i].continent, 20);
    }

    cout << "\nEntão os lugares que você deseja visitar são:\n";
    for (int i = 0; i < amount; i++) {
        cout << "\t" << (i+1) << ". " << places[i].name << ", "
             << places[i].country << ", " << places[i].continent
             << ".\n";
    }

    delete places;

    return 0;
}
