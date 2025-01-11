#include <iostream>
using namespace std;

void printChar(char);

int main()
{
    printChar(80);
    printChar(114);
    printChar(111);
    printChar(103);
    printChar(67);
    printChar(111);
    printChar(109);
    printChar(112);

    return 0;
}

void printChar(char ch)
{
    cout << ch << endl;
}
