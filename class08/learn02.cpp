// PROGRAMA ERRADO - não entendi por que

#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main()
{
    unsigned chain = 0b11001000001100010100000000000000;

    // calculando expoente (8 primeiros bits)
    unsigned exponent = chain >> 24;

    // calculando sinal
    int sign;
    unsigned mask = 1 << 23;
    if (chain & mask)
        sign = -1;
    else
        sign = +1;

    // calculando mantissa
    float mantissa = 0;
    for (int i = 22; i <= 0; i--)
    {
        mask = 1 << i;
        if (chain & mask)
            mantissa += pow(2, 23-i);
    }

    // aplicando fórmula
    float num = sign * pow(2, exponent-127) * (1 + mantissa);

    cout << "O valor calculado para a cadeia de bits foi " << num << endl;
    cout << "O valor certo é " << (float) 0b11001000001100010100000000000000 << endl;
    cout << bitset<32>(3.35867e+09) << endl;

    return 0;
}
