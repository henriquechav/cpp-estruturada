#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Digite 4 palavras:\n";
    char word1[15], word2[15], word3[15], word4[15];
    cin >> word1 >> word2 >> word3 >> word4;

    // contando o total de letras de todas as palavras
    int counter = 0;
    for (int i = 0; word1[i] != '\0'; i++)
        counter++;
    for (int i = 0; word2[i] != '\0'; i++)
        counter++;
    for (int i = 0; word3[i] != '\0'; i++)
        counter++;
    for (int i = 0; word4[i] != '\0'; i++)
        counter++;

    char *concatenated = new char[counter+4];
    strcpy(concatenated, word1);
    strcat(concatenated, " ");
    strcat(concatenated, word2);
    strcat(concatenated, " ");
    strcat(concatenated, word3);
    strcat(concatenated, " ");
    strcat(concatenated, word4);

    cout << "Concatenando as palavras obtém-se: ";
    cout << concatenated << endl;

    return 0;
}
