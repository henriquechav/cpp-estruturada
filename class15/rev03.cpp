#include <iostream>
using namespace std;

struct fish
{
    char type[20];
    float weight;
    unsigned length;
};

int main()
{
    cout << "Tamanho do vetor: ";
    unsigned size;
    cin >> size;

    fish *fishes = new fish[size];

    cout << "\nTipo: ";
    cin >> fishes[1].type;
    cout << "Peso: ";
    cin >> fishes[1].weight;
    cout << "Comprimento: ";
    cin >> fishes[1].length;

    cout << "\nO peso do peixe é " << fishes[1].weight << " gramas.\n";

    delete [] fishes;   

    return 0;
}
