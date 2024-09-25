// learning exercise 5
#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    char separator;

    cout << "Que horas são? ";
    cin >> hours >> separator >> minutes;

    cout << "O seu relógio está atrasado.\n";

    hours = hours + 1;

    cout << "Agora são " << hours << separator << minutes << ".\n";

    return 0;
}
