#include <iostream>
using namespace std;

struct player
{
    char name[20];
    float salary;
    unsigned goals;
};

int main()
{
    player *pplay = new player;
    cout << "Digite nome, salário e gols do jogador: ";
    cin >> pplay->name >> pplay->salary >> pplay->goals;

    cout << "Contratação para o próximo ano:\n";
    cout << pplay->name << " por " << pplay->salary << " reais.\n";

    delete pplay;
    return 0;
}
