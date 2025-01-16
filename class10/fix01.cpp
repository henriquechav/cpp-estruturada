#include <iostream>
using namespace std;
// 1 - Alface
// 2 - Beterraba
// 3 - Cenoura

int main()
{
    float prices[3] = {1.50, 2.00, 1.00};

    cout << "Prezado Cliente,\nDigite a quantidade de quilos desejados:\n";
    
    float amounts[3];
    cout << "Alface: ";
    cin >> amounts[0];
    cout << "Beterraba: ";
    cin >> amounts[1];
    cout << "Cenoura: ";
    cin >> amounts[2];

    float totals[3];
    totals[0] = amounts[0] * prices[0];
    totals[1] = amounts[1] * prices[1];
    totals[2] = amounts[2] * prices[2];

    cout << fixed;
    cout.precision(2);

    cout << "\nResumo da compra\n";
    cout << "----------------------\n";
    cout << "Alface    = R$" << totals[0] << endl;
    cout << "Beterraba = R$" << totals[1] << endl;
    cout << "Cenoura   = R$" << totals[2] << endl;
    cout << "----------------------\n";
    cout << "Total     = R$" << totals[0] + totals[1] + totals[2] << endl;

    return 0;
}