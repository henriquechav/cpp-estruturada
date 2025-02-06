#include <iostream>
using namespace std;

int main()
{
    cout << "A diferença entre a soma dos quadrados dos 100 primeiros números naturais\n"
            "e o quadrado da soma deles é: ";

    long sumOfSquares = 0, squareOfSum = 0;

    for (int i = 1; i <= 100; i++)
        sumOfSquares += i * i;

    for (int i = 1; i <= 100; i++)
        squareOfSum += i;
    squareOfSum *= squareOfSum;

    cout << (squareOfSum - sumOfSquares) << ".\n";

    return 0;
}
