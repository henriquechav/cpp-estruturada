#include <iostream>
using namespace std;

struct account
{
    unsigned id;
    char name[30];
    float balance;
};

ostream& operator<<(ostream&, account&);

int main()
{
    account act = {};
    cout << "Entre com o id da conta: ";
    cin >> act.id;
    cin.ignore();
    cout << "Entre com o seu nome: ";
    cin.getline(act.name, 30);
    
    cout << endl << act;

    float deposit;
    cout << "\nDigite o valor do depósito: R$";
    cin >> deposit;
    act.balance += deposit;

    cout << endl << act;

    return 0;
}

ostream& operator<<(ostream& os, account &ac)
{
    cout << fixed;
    cout.precision(2);

    os << "Dados atualizados da conta: {\n"
       << "\tid: " << ac.id << endl
       << "\tnome: " << ac.name << endl
       << "\tsaldo: R$" << ac.balance << endl
       << "}\n";

    cout << scientific;

    return os;
}
