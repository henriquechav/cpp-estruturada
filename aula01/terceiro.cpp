// terceiro.cpp - semantic errors
#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Número de dias: ";
    cin >> days;

    int hours = days * 24;
    cout << days << " dias tem " << hours << " horas." << endl;

    return 0;
}
