#include <iostream>
using namespace std;

char charade(char, int);

int main()
{
    cout << charade('<', 20);
    cout << charade('\a', 90);
    cout << charade('(', 72);
    cout << charade('5', 48);
    cout << charade('\u0001', 107) << endl;

    return 0;
}

char charade(char ch, int x)
{
    return ch + x;
}
