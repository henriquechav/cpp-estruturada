#include <iostream>
using namespace std;

struct player 
{
    char name[20];
    float salary;
    unsigned goals;
};

void showTeam(player[], int);

int main()
{
    player *team = new player[2];

    cout << "Digite nome, salário e gols de dois jogadores:\n";
    for (int i = 0; i < 2; i++)
        cin >> team[i].name 
            >> team[i].salary 
            >> team[i].goals;

    showTeam(team, 2);

    delete[] team;

    return 0;
}

void showTeam(player team[], int size)
{
    for (int i = 0; i < size; i++)
        cout << team[i].name << " "
             << team[i].salary << " "
             << team[i].goals << endl;
}
