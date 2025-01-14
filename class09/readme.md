# Aula 09

Conteúdo: operadores aritméticos; conversões de tipo; type cast.

## Operadores aritméticos

Os operadores (`+`, `-`, `*`, `/` e `%`) com os operandos formam as expressões, cujo resultado é armazenado em um local temporário na memória. O tipo armazenado no local temporário da memória é determinado pelo tipo de um dos operandos. A atribuição ocorre num segundo momento.

As regras de precedência e associatividade impõem a ordem das operações em uma expressão, como na matemática. Contudo, a ordem de avaliação das funções, quando várias são chamadas numa mesma expressão, é incerta. A ordem de avaliação varia entre diferentes compiladores de C++.

## Constante simbólica (`#define`) *versus* constante (`const`)

A criação de uma constante deve ser uma inicialização de variável precedida por `const`; por exemplo `const int num = 100;`. Por serem semelhante às variáveis, ter um escopo e passar por verificação de tipos, as constantes criadas com `const` são mais recomendadas do que as constantes simbólicas definidas com `#define`.

## Conversões de tipos

As conversões de tipos automáticas são feitas em três situações: em atribuições , em expressões e na passagem de argumentos para funções.

### Conversões na atribuição

C++ dificilmente dá erros na atribuição de valores numéricos. Mas é preciso tomar cuidado com atribuições para tipos com menor capacidade, por exemplo atribuir um valor `short` para uma variável `char`, nesta situação apenas os bits de mais baixa ordem são copiados. 

No caso de atribuir um tipo ponto flutuante maior para um menor, ou de atribuir um tipo flutuante para um tipo inteiro, pode haver perda de precisão, no primeiro caso, e perda da parte fracionária, no segundo caso, além de que se o valor original estiver fora da faixa do tipo alvo o resultado é indefinido.

### Conversões em expressões

Alguns tipos, como `char` e `short`, são promovidos (i.e, convertidos para um tipo maior) quando inseridos em uma expressão.
