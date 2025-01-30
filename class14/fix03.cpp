#include <iostream>
using namespace std;

void more(int*);
int increment(int);

int main()
{
    cout << "Digite um valor: ";
    int num;
    cin >> num;

    int *p = &num;
    more(p);
    cout << "\nResultado após Mais: " << num << endl;
    num = increment(num);
    cout << "Resultado após Incrementa: " << num << endl;

    return 0;
}

void more(int *p)
{
    *p = *p + 1;
}

int increment(int n)
{
    return n + 1;
}
