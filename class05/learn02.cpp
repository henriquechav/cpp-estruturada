#include <iostream>
using namespace std;

float increaseSalary(float);

int main()
{
    float wage;
    cout << "Salário atual: R$";
    cin >> wage;

    float increased_wage;
    increased_wage = increaseSalary(wage);
    cout << "Salário ajustado para R$" << increased_wage << endl;

    return 0;
}

float increaseSalary(float salary)
{
    return salary + salary * 0.15;
}
