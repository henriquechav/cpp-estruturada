#include <iostream>
using namespace std;

int main(void)
{
    int years, days;

    cout << "Digite sua idade: ";
    cin >> years;

    days = years * 365;
    
    cout << years << " anos equivalem a ";
    cout << days << " dias.\n";

    return 0;
}
