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
    player *team = new player[22];

    cout << "Digite o nome, salário e gols de dois jogadores:\n";
    cin >> team[0].name >> team[0].salary >> team[0].goals;
    cin >> team[1].name >> team[1].salary >> team[1].goals;

    cout << fixed;
    cout.precision(2);
    cout << "Custo de aquisição: R$" << team[0].salary + team[1].salary << "!\n";

    delete [] team;

    return 0;
}
