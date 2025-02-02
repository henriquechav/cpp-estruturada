#include <iostream>
using namespace std;

struct fish
{
    char type[20];
    float weight;
    unsigned length;
};

void showFirstWeight(fish[]);

int main()
{
    cout << "Tamanho do vetor: ";
    unsigned size;
    cin >> size;

    fish *fishes = new fish[size];

    cout << "\nTipo: ";
    cin >> fishes[0].type;
    cout << "Peso: ";
    cin >> fishes[0].weight;
    cout << "Comprimento: ";
    cin >> fishes[0].length;

    showFirstWeight(fishes);

    delete fishes;

    return 0;
}

void showFirstWeight(fish fishes[])
{
    cout << "\nO peso do primeiro peixe é " << fishes[0].weight << " gramas.\n";
}
