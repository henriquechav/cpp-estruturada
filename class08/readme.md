# Aula 08

Conteúdo: tipos de ponto flutuante; `float`; `double`; `long double`; precisão.

## Tipos de ponto flutuante

São tipos que armazenam valores numéricos com parte fracionária. Eles também podem guardar valores inteiros maiores do que os permitidos por tipos inteiros como o `long long`. A nível de memória, os números reais são armazenados em duas partes: mantissa e expoente. Por exemplo, o valor `341.25` poderia ser guardado como uma mantissa `0.34125` e um expoente `3` (representando o fator multiplicador `10³`).

Diferente dos tipos inteiros, que se distinguem pelo espaço que ocupam na memória, os tipos ponto flutuante se diferem entre si pela quantidade de dígitos significativos da mantissa e pelo valor máximo do expoente. Embora a largura de bits ainda seja determinada e fixa, o dilema encontra-se em decidir quantos bits representarão a mantissa e quantos representarão o expoente. Mais bits para mantissa significa uma maior precisão, ao passo que mais bits para o expoente significa uma maior magnitude do número.

A conversão de binário para ponto flutuante é dada pela fórmula: `valor = sinal * 2^(expoente - 127) * (1 + mantissa)`, onde os bits da mantissa representam um somatório de potências inversas de 2 decrescentes ($2^{-1} + 2^{-2} + 2^{-3} + ... + 2^{-qnt\ de\ bits\ da\ mantissa}$).

Isso faz com que nem todos os números reais possam ser representados por tipos ponto flutuante. Existe uma fração mínima que pode ser adicionada ou subtraída da variável. Por exemplo: se atribuirmos o valor `6.1` a uma variável e depois a exibirmos com 8 casas decimais de precisão, veremos que o valor armazenado é, na verdade, `6.09999990`.

As constantes de ponto flutuante são, por padrão, armazenadas como `double`.

## Limites na plataforma Linux usando o compilador `g++`

```
Número de dígitos significativos
float:       6
double:      15
long double: 18

Valores máximos do expoente
float:       38
double:      308
long double: 4932
```

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab08/Lab08.pdf).
