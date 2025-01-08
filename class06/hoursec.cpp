// convert hours to seconds
#include <iostream>
using namespace std;

#define SECSINHOUR 3600

int main(void)
{
    cout << "Digite a quantidade de tempo em horas: ";
    int hours;
    cin >> hours;

    int seconds = hours * SECSINHOUR;
    cout << "Isso equivale a " << seconds << " segundos.\n";

    return 0;
}
