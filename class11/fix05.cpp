#include <iostream>
#include <cstring>
using namespace std;

char lastLetter(char []);

int main()
{
    char word[30];
    cout << "Digite uma palavra: ";
    cin >> word;

    cout << "Em " << word << " a última letra é ";
    cout << lastLetter(word) << ".\n";

    return 0;
}

char lastLetter(char str[])
{
    int lastPos = strlen(str) - 1;
    return str[lastPos];
}
