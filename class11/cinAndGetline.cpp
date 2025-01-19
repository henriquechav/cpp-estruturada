#include <iostream>
using namespace std;

int main()
{
    cout << "Em que ano sua casa foi construída?\n";
    int year;
    cin >> year;
    cin.get();

    cout << "Qual é seu endereço?\n";
    char address[80];
    cin.getline(address, 80);

    cout << "Ano de construção: " << year << endl;
    cout << "Endereço: " << address << endl;
    cout << "Pronto!\n";

    return 0;
}
