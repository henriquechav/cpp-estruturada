#include <iostream>
using namespace std;

void show(char, int[]);

int main()
{
    cout << "Digite 10 valores: ";
    int A[5], B[5];
    for (int i = 0; i < 5; i++)
        cin >> A[i];
    for (int i = 0; i < 5; i++)
        cin >> B[i];

    // criando o vetor soma
    int S[5];
    for (int i = 0; i < 5; i++)
        S[i] = A[i] + B[i];

    show('A', A);
    show('B', B);
    show('S', S);

    return 0;
}

void show(char letter, int values[])
{
    cout << "Vetor " << letter << ": ";
    for (int i = 0; i < 5; i++)
        cout << values[i] << " ";
    cout << endl;
}
