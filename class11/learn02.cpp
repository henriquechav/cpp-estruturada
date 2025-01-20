#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char num1[10];
    int num2;
    cout << "Entre com dois números: ";
    cin >> num1;
    cin >> num2;

    cout << "A multiplicação entre eles é " << atoi(num1) * num2 << ".\n";
    
    return 0;
}
