#include <iostream>
using namespace std;

double avg(int, int);

int main()
{
    int num1, num2;
    cout << "Digite um valor inteiro: ";
    cin >> num1;
    cout << "Digite outro valor inteiro: ";
    cin >> num2;

    double average;
    average = avg(num1, num2);
    cout << "A média dos números é " << average << endl;

    return 0;
}

// being careful with types
double avg(int n1, int n2)
{
    double a, b;
    a = n1;
    b = n2;

    double result = (a+b) / 2;
    return result;
}
