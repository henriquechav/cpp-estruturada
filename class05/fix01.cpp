#include <iostream>
using namespace std;

void showTime(int, int);

int main()
{
    int hours;
    cout << "Entre com o número de horas: ";
    cin >> hours;

    int minutes;
    cout << "Entre com o número de minutos: ";
    cin >> minutes;

    showTime(hours, minutes);

    return 0;
}

void showTime(int h, int m)
{
    cout << "Agora são " << h << ":" << m << endl;
}
