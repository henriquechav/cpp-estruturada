#include <iostream>
using namespace std;

unsigned higherBits(unsigned);

int main()
{
    unsigned num;
    cout << "Digite um valor inteiro: ";
    cin >> num;

    unsigned result = higherBits(num);
    cout << "Os 16 bits mais altos desse valor correspondem ao número " << result << ".\n";

    return 0;
}

unsigned higherBits(unsigned chain)
{
    return chain >> 16;
}
