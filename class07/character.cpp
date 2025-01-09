#include <iostream>
using namespace std;

int main()
{
    char ch = 'M';
    int i = ch;

    cout << "O código ASCII para " << ch << ": " << i << endl; 

    cout << "Adicionando 1 ao código caractere..." << endl;
    ch = ch + 1;
    i = ch;

    cout << "O código ASCII para " << ch << ": " << i << endl;

    return 0;
}
