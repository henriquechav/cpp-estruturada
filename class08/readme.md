# Aula 08

Conteúdo: tipos de ponto flutuante; `float`; `double`; `long double`; precisão.

## Tipos de ponto flutuante

São tipos que armazenam valores numéricos com parte fracionária. Eles também podem guardar valores inteiros maiores do que os permitidos por tipos inteiros como o `long long`. A nível de memória, os números reais são armazenados em duas partes: mantissa e expoente. Por exemplo, o valor `341.25` poderia ser guardado como uma mantissa `0.34125` e um expoente `3` (representando o fator multiplicador `10³`).

Diferente dos tipos inteiros, que se distinguem pelo espaço que ocupam na memória, os tipos ponto flutuante se diferem entre si pela quantidade de dígitos significativos da mantissa e pelo valor máximo do expoente. Embora a largura de bits ainda seja determinada e fixa, o dilema encontra-se em decidir quantos bits representarão a mantissa e quantos representarão o expoente. Mais bits para mantissa significa uma maior precisão, ao passo que mais bits para o expoente significa uma maior magnitude do número.
