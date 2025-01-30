#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    char *p = &ch;

    *p = 'B';

    cout << "Conteúdo da variável: " << ch << endl;
    cout << "Counteúdo apontado: " << *p << endl;

    return 0;
}
