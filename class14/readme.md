# Aula 14

Conteúdo: ponteiros; apontador de memória; operador de endereço e indireção.

## Motivação

O primeiro motivo para aprender a usar bem os ponteiros e a alocação dinâmica de memória é que eles permitem criar um vetor com um tamanho conhecido só durante a execução do programa. Essa prática é comum para vetores de registros, como os que usei nas últimas aulas.

Em segundo lugar, começarei a usar registros para armazenar grandes quantidades de informação, como imagens, vídeos e bancos de dados. E as funções do C++ recebem argumentos por cópias. Contudo, não seria eficiente copiar, digamos, um vídeo inteiro cada vez que uma função fosse chamada. Por isso, podemos passar ponteiros, indicando o local da memória com os dados, como argumentos para funções.

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

### Ponteiros e registros

Caso eu crie um registro `jogador`, crie uma variável deste tipo e armazene o endereço dessa variável em um ponteiro, do mesmo modo que eu poderia acessar os campos do registro usando a variável seguida do operador `.`, eu posso acessar os campos do registro usando o ponteiro seguido do operador `->`. Ex:

```
jogador pele;
jogador * ptr = &pele;
cout << ptr->nome; // equivale a pele.nome
cout << ptr->salario; // equivale a pele.salario
cout << ptr->gols; // equivale a pele.gols
```

### Ponteiros e funções

Como dito na seção de motivação, eu posso usar os ponteiros para passar valores por referência, em vez de cópia, para funções. Isso me permite trabalhar com, por exemplo, registros com grandes volumes de informação sem ter de ficar copiando-os. Então eu poderia passar o endereço de um registro para uma função, como `exibir(&novato)`, cujo parâmetro seria um ponteiro `void exibir(jogador * ptr){...}`.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab14/Lab14.pdf).
