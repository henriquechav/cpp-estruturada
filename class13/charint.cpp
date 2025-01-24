#include <iostream>
using namespace std;

union char_int
{
    char ch;
    short num;
};

int main()
{
    char_int val = {0};

    cout << "Digite um caractere: ";
    cin >> val.ch;
    cout << "Código ASCII: " << val.num << endl;

    return 0;
}
