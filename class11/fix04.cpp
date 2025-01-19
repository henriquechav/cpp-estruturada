#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[] = "C++ Primer Plus";

    cout << "Tamanho com strlen: " << strlen(name) << endl; // doesn't count '\0'
    cout << "Tamanho com sizeof: " << sizeof(name) / sizeof(name[0]) << endl;

    return 0;
}
