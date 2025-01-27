#include <iostream>
using namespace std;

struct player
{
    char name[25];
    int number;
};

struct goal
{
    player plr;
    int hour, minute;
};

istream& operator>>(istream&, goal&);
ostream& operator<<(ostream&, goal&);

int main()
{
    goal goals[3];
    cout << "Digite os dados dos 3 últimos gols:\n";
    cout << "Gol: "; cin >> goals[0];
    cout << "Gol: "; cin >> goals[1];
    cout << "Gol: "; cin >> goals[2];

    cout << "\nOs gols foram:\n";
    cout << "\t- " << goals[0] << endl;
    cout << "\t- " << goals[1] << endl;
    cout << "\t- " << goals[2] << endl;

    cout << endl;
    return 0;
}

istream& operator>>(istream& is, goal &g)
{
    is >> g.plr.name >> g.plr.number >> g.hour;
    is.ignore();
    is >> g.minute;
    return is;
}

ostream& operator<<(ostream& os, goal &g)
{
    os << "Gol marcado por " << g.plr.name << ", camisa " << g.plr.number
       << ", às " << g.hour << ":" << g.minute << ".";
    return os;
}
