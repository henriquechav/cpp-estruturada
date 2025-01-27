#include <iostream>
using namespace std;

enum mes {Jan=1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

istream& operator>>(istream&, mes&);

int main()
{
    mes inicio, fim;

    inicio = Fev;
    fim    = Nov;

    cout << "Digite o número do mês atual: ";
    int atual;
    cin >> atual;

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
