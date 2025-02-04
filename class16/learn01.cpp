#include <iostream>
using namespace std;

int main()
{
    cout << "Digite jogador/time: ";
    char playerAndTeam[20];
    cin >> playerAndTeam;

    int lettersAmount = 0, counter;
    for (counter = 0; playerAndTeam[counter] != '/'; counter++) {
        lettersAmount++;
    }
    char *pteam = &playerAndTeam[counter+1];

    cout << "O nome do jogador tem " << lettersAmount << " letras.\n";
    cout << "O seu time é o " << pteam << ".\n";

    return 0;
}
