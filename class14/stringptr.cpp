#include <iostream>
using namespace std;

int main()
{
    char name[20] = "Joaozinho";
    cout << name << endl;

    char * ptr = &name[1];
    *ptr = 'P';
    cout << ptr << endl;

    name[0] = 'T';
    *ptr = 'i';
    cout << name << endl;

    return 0;
}
