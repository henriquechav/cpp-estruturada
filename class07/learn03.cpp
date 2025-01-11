#include <iostream>
using namespace std;

unsigned short lowerBits(unsigned);

int main()
{
    unsigned num;
    cout << "Digite um valor inteiro: ";
    cin >> num;

    unsigned short result = lowerBits(num);
    cout << "Os 16 bits mais baixos desse valor correspondem ao número " << result << ".\n";

    return 0;
}

unsigned short lowerBits(unsigned chain)
{
    unsigned half = sizeof chain / 2;
    return chain << half >> half;
}
