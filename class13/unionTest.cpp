#include <iostream>
using namespace std;

union identifier
{
    char ch;
    int num;
    double frac;
};

int main()
{
    identifier id;
    id.ch = 'A';
    cout << id.ch << endl;
    id.num = 150;
    cout << id.num << endl;
    cout << id.ch << endl;

    return 0;
}
