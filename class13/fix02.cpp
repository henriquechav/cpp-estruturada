#include <iostream>
using namespace std;

enum mes {Jan=1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

istream& operator>>(istream&, mes&);
ostream& operator<<(ostream&, mes&);

int main()
{
    mes inicio, fim, atual;

    inicio = Mar; // início do semestre
    fim    = Jun; // fim do semestre

    cout << "Digite o número do mês atual: ";
    cin >> atual;

    cout << "Estamos no mês " << atual << ". ";
    if (atual >= inicio && atual <= fim)
        cout << "Você está em período de aulas.\n";
    else 
        cout << "Férias!\n";

    return 0;
}

istream& operator>>(istream& is, mes &m)
{
    int temp;
    is >> temp;
    m = mes(temp);
    return is;
}

ostream& operator<<(ostream& os, mes &m)
{
    os << int(m);
    return os;
}
