# Aula 17

Conteúdo: aplicações do laço `for`; operador vírgula; incremento e decremento.

## Incremento e decremento

Como visto, o operador `++` significa um incremento, ao passo que `--` significa um decremento. Eles podem ser usados antes ou depois de uma variável, com uma pequena diferença no efeito do operador. Quando usados antes do valor, o resultado da expressão é o valor já incrementado ou decrementado. Ao contrário, quando o operador é usado depois do valor, o resultado da expressão retornado é o próprio valor inalterado, a operação acontece depois.

## Blocos de instruções

Delimitados por chaves `{}`, os blocos de instruções são conhecidos por seguirem laços de repetição, desvios condicionais e funções. Mas eles podem ser usados em qualquer lugar do programa.

Eles são úteis para criar escopos locais para as variáveis. Exemplo:

```
#include <iostream>
int main()
{
    int x = 20;
    {
        int y = 100;
        std::cout << x << std::endl; // ok
        std::cout << y << std::endl; // ok
    }
    std::cout << x << std::endl; // ok
    std::cout << y << std::endl; // erro, y não é conhecido
    return 0;
}
```

Para variáveis com mesmo nome em blocos diferentes, a preferência do programa sempre será pela variável do escopo local.

## Operador vírgula

Assim como o bloco de instruções permite usar várias instruções onde a sintaxe da linguagem aceita uma só, o operador vírgula permite usar várias expressões onde a sintaxe exige uma. Um exemplo de como poderia ser usado com o laço `for`:

```
for (int i=0, j=4; i <= 4; i++, j--)
    cout << i << " != " << j << endl;
```

## Laço para sequências (*range based loop `for`*)

Laço que simplifica a tarefa de percorrer os elementos de um vetor, introduzido no padrão C++11. Exemplo:

```
int vet[5] = { 3,5,6,7,9 };
for (int n : vet)
    cout << n << " ";
```

No exemplo acima, a variável `n` assume o valor de cada elemento do vetor `vet`.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab17/Lab17.pdf).

O trabalho pode ser encontrado [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Trabalhos/TP2.pdf).
