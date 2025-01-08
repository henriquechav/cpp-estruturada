#include <iostream>
using namespace std;

int main()
{
    short snum;
    int inum;
    long lnum;
    long long llnum;

    cout << "short:       " << sizeof snum << " bytes\n";
    cout << "int:         " << sizeof inum << " bytes\n";
    cout << "long:        " << sizeof lnum << " bytes\n";
    cout << "long long:   " << sizeof llnum << " bytes\n";

    int total = sizeof snum + sizeof inum + sizeof lnum + sizeof llnum;

    cout << "Total:      " << total << " bytes \n";

    return 0;
}
