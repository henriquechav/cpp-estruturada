#include <iostream>
using namespace std;

long sumInterval(int, int);

int main()
{
    cout << "Digite o início e o fim do intervalo somado.\n";
    int start, end;
    cout << "Início: ";
    cin >> start;
    cout << "Fim: ";
    cin >> end;

    long sum = sumInterval(start, end);

    cout << "\nO resultado da soma é " << sum << ".\n";

    return 0;
}

long sumInterval(int a, int b)
{
    long sum;
    for (sum = 0; a <= b; a++)
        sum += a;
    return sum;
}
