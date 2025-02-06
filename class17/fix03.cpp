#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[20], inverted[20];
    cout << "Digite uma palavra: ";
    cin >> word;

    int i, j;
    for (i = 0, j = strlen(word)-1; j >= 0; i++, j--)
        inverted[i] = word[j];
    inverted[i] = '\0';

    cout << "Palavra invertida: " << inverted << endl;

    if (strcmp(word, inverted))
        cout << "A palavra não é um palíndromo!\n";
    else 
        cout << "A palavra é um palíndromo!\n";

    return 0;
}
