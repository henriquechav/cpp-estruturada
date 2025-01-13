#include <iostream>
using namespace std;

#define SECS_PER_YEAR 3.156e7

float yearsToSeconds(int);

int main()
{
    int age;
    cout << "Digite sua idade em anos: ";
    cin >> age;

    float ageInSeconds = yearsToSeconds(age);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(1);
    cout << age << " anos correspondem a " << ageInSeconds << " segundos.\n";

    return 0;
}

float yearsToSeconds(int years)
{
    return years * SECS_PER_YEAR;
}
