# Aula 14

Conteúdo: ponteiros; apontador de memória; operador de endereço e indireção.

## Motivação

O primeiro motivo para aprender a usar bem os ponteiros e a alocação dinâmica de memória é que eles permitem criar um vetor com um tamanho conhecido só durante a execução do programa. Essa prática é comum para vetores de registros, como os que usei nas últimas aulas.

Em segundo lugar, começarei a usar registros para armazenar grandes quantidades de informação, como imagens, vídeos e bancos de dados. E as funções do C++ recebem argumentos por cópias. Contudo, não seria eficiente copiar, digamos, um vídeo inteiro cada vez que uma funções fosse chamada. Por isso, podemos passar ponteiros, indicando o local da memória com os dados, como argumentos para funções.

Terceiro, há casos em que gostarei de estender o tempo de vida de uma variável. O espaço de memória reservado para uma variável é liberado assim que a execução de seu escopo se encerra. Os dados continuam ali, mas o programa pode sobrescrevê-los com novas variáveis. Usando ponteiros, poderei acessar esses dados ainda que a variável tenha "morrido".

Por fim, os ponteiros são essenciais para criar estruturas de dados (árvores, grafos, listas encadeadas, etc).

## Endereços de variáveis

Cada variável possui um endereço de memória, ao qual está associado seu nome, um tipo de dado, que indica o tamanho da memória reservada, e um valor armazenado. O operador `&` obtém o endereço de uma variável.

```
short total; // declaração - endereço (nome) e tipo (tamanho)
total = 3126; // atribuição - valor

cout << total; // exibe valor
cout << &total; // exibe localização
```

## Ponteiros

Um ponteiro é um tipo especial que armazena endereços. Para declarar um ponteiro, devo informar o tipo do elemento apontado, usar o operador de indireção e nomear o ponteiro, como em `char * ptr;`. Também posso acessar o conteúdo do elemento apontado pelo ponteiro usando o operador de indireção `*ptr`.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab14/Lab14.pdf).
