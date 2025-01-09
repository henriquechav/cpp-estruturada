# Aula 07 

Conteúdo: tipos caractere e booleano; tabela ASCII; operadores bit a bit.

## Tipo caractere

O `char` é um tipo de dado inteiro que armazena inteiros de 8 bits. O `unsigned char` guarda inteiros de 0 a 255. Mas normalmente ele é usado para armazenar caracteres (que são representados entre aspas simples). Os caracteres são mapeados em números inteiros através de tabelas como a ASCII e a Unicode. As funções `cout` e `cin` do C++ fazem a conversão entre inteiros e caracteres.

Existem alguns caracteres especiais que podem ser "escapados" com o uso da barra. Ex: `\n` pula uma linha; `\a` emite um som; `\b` retrocede o cursor; `\'` e `\"` exibem as aspas.

## Tipo booleano

O `bool` armazena valores como `true` e `false` e ocupa 8 bits na memória. Isso porque a CPU não endereça espaços menores que 1 byte na memória. Quando lemos do usuário um tipo booleano, o `cin` espera um número como resposta, sendo 0 para `false` e qualquer outro número para `true`.

## Operadores bit a bit

A representação binária de qualquer um dos tipos inteiros pode ser manipulada com os operadores abaixo:

| Operador   | Significado   | Uso              |
| :--------: | :-----------: | :--------------: |
| `~`        |   NOT         | `~expr`          |
| `<<`       |   LEFT SHIFT  | `expr1 << expr2` |
| `>>`       |  RIGHT SHIFT  | `expr1 >> expr2` |
| `&`        |  AND          | `expr1 & expr2`  |
| `\|`       |  OR           | `expr1 \| expr2` |
| `^`        |  XOR          | `expr1 ^ expr2`  |
