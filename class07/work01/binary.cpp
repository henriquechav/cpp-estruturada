// Definição das funções para manipulação de bits.

unsigned short turnOnBit(unsigned short state, int position)
{
    unsigned short mask = 1 << position;
    return state | mask;
}

unsigned short turnOffBit(unsigned short state, int position)
{
    unsigned short mask = ~(1 << position);
    return state & mask;
}

bool testBit(unsigned short state, int position)
{
    unsigned short mask = 1 << position;
    return state & mask;
}

unsigned short binaryAnd(unsigned short chain1, unsigned short chain2)
{
    return chain1 & chain2;
}

unsigned short binaryOr(unsigned short chain1, unsigned short chain2)
{
    return chain1 | chain2;
}

// desloca os bits mais baixos para a esquerda
// depois os retorna para a posição original
unsigned short lowerBits(unsigned short state)
{
    state = state << 8;
    return state >> 8;
}

// usa a técnica anterior para os bits mais altos
unsigned short higherBits(unsigned short state)
{
    state = state >> 8;
    return state << 8;
}
