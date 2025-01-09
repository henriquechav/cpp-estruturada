#include <iostream>
#include <climits>
using namespace std;

bool isShort(long);
bool isInt(long);

int main()
{
    long num;
    cout << "Digite um valor inteiro: ";
    cin >> num;

    if (isShort(num))
    {
        cout << num << " cabe em 16 bits\n";
    } else
    {
        cout << num << " não cabe em 16 bits\n";
    }
    
    if (isInt(num))
    {
        cout << num << " cabe em 32 bits\n";
    } else
    {
        cout << num << " não cabe em 32 bits\n";
    }
    
    return 0;
}

bool isShort(long n)
{
    return n < SHRT_MAX && n > SHRT_MIN;
}

bool isInt(long n)
{
    return n < INT_MAX && n > INT_MIN;
}
