// Definição das funções dos operadores genéticos.
#include <iostream>
#include "binary.h"
using namespace std;

bool evaluate(unsigned short solution)
{
    int weight = 0;
    int value = 0;

    if (testBit(solution, 15)) // Objeto A
    {
        weight += 12;
        value += 4;
    }
    if (testBit(solution, 14)) // Objeto B
    {
        weight += 3;
        value += 4;
    }
    if (testBit(solution, 13)) // Objeto C
    {
        weight += 5;
        value += 8;
    }
    if (testBit(solution, 12)) // Objeto D
    {
        weight += 4;
        value += 10;
    }
    if (testBit(solution, 11)) // Objeto E
    {
        weight += 9;
        value += 15;
    }
    if (testBit(solution, 10)) // Objeto F
    {
        weight += 1;
        value += 3;
    }
    if (testBit(solution, 9)) // Objeto G
    {
        weight += 2;
        value += 1;
    }
    if (testBit(solution, 8)) // Objeto H
    {
        weight += 3;
        value += 1;
    }
    if (testBit(solution, 7)) // Objeto I
    {
        weight += 4;
        value += 2;
    }
    if (testBit(solution, 6)) // Objeto J
    {
        weight += 1;
        value += 10;
    }
    if (testBit(solution, 5)) // Objeto K
    {
        weight += 2;
        value += 20;
    }
    if (testBit(solution, 4)) // Objeto L
    {
        weight += 4;
        value += 15;
    }
    if (testBit(solution, 3)) // Objeto M
    {
        weight += 5;
        value += 10;
    }
    if (testBit(solution, 2)) // Objeto N
    {
        weight += 2;
        value += 3;
    }
    if (testBit(solution, 1)) // Objeto O
    {
        weight += 4;
        value += 4;
    }
    if (testBit(solution, 0)) // Objeto P
    {
        weight += 1;
        value += 12;
    }
    
    // exibição dos resultados da avaliação

    cout.width(5); cout << solution;
    cout << " - $"; 
    cout.width(2); cout << value;
    cout << " - "; 
    cout.width(2); cout << weight;
    cout << "Kg - ";

    // retorno indicando extrapolação do limite de peso

    return weight <= 20;
}

unsigned short singlePointCrossing(unsigned short chain1, unsigned short chain2)
{
    return binaryOr(higherBits(chain1), lowerBits(chain2));
}

unsigned short arithmeticCrossing(unsigned short chain1, unsigned short chain2)
{
    return binaryAnd(chain1, chain2);
}

unsigned short simpleMutation(unsigned short state)
{
    if (testBit(state, 9))
        return turnOffBit(state, 9);
    else
        return turnOnBit(state, 9);
}

unsigned short doubleMutation(unsigned short state)
{
    // primeira mutação
    if (testBit(state, 3))
        state = turnOffBit(state, 3);
    else 
        state = turnOnBit(state, 3);

    // segunda mutação e retorno
    if (testBit(state, 12))
        return turnOffBit(state, 12);
    else
        return turnOnBit(state, 12);
}
