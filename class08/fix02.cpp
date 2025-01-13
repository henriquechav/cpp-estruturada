#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Digite um ponto flutuante: ";
    cin >> num;

    cout << "Notação padrão: " << num << endl;

    cout.setf(ios_base::scientific, ios_base::floatfield);
    cout << "Notação científica: " << num << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(6);
    cout << "Notação decimal: " << num << endl;

    return 0;
}

