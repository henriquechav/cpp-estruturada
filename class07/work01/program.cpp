#include <iostream>
#include "genetic.h"
using namespace std;

#define red "\033[31m"
#define green "\033[32m"
#define default "\033[m"

int main()
{
    unsigned short solution1, solution2, solution3, solution4, solution5, solution6;
    cout << "Entre com 6 soluções iniciais (números entre 0 e 65535):\n";
    cin >> solution1;
    cin >> solution2;
    cin >> solution3;
    cin >> solution4;
    cin >> solution5;
    cin >> solution6;

    unsigned short solution7, solution8, solution9, solution10;
    solution7 = singlePointCrossing(solution1, solution2);
    solution8 = arithmeticCrossing(solution3, solution4);
    solution9 = simpleMutation(solution5);
    solution10 = doubleMutation(solution6);

    cout << "\nResultado da Avaliação\n";
    cout << "-----------------------\n";

    // avaliação das soluções originais
    if (evaluate(solution1))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution2))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution3))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution4))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution5))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution6))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    cout << "-----------------------\n";

    // avaliação das soluções genéticas (derivadas)
    if (evaluate(solution7))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution8))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution9))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    if (evaluate(solution10))
        cout << green << "OK\n" << default;
    else
        cout << red << "X\n" << default;

    return 0;
}
