# Aula 10

Conteúdo: vetores; `const` *versus* `constexpr`; vector e array.

## Vetores

Os vetores são um dos tipos compostos (tipo derivado) que existem no C++. Outros são: strings, registros, uniões e enumerações. Eles servem para armazenar conjuntos de muitos valores baseados nos tipos básicos.

Os vetores guardam um conjunto de valores do mesmo tipo básico. Por exemplo: 30 valores do tipo `float` para representar as notas de 30 alunos. Um exemplo de declaração de vetor: `int visitas[365];`. O tipo dos valores é seguido do nome do vetor com a quantidade de valores entre colchetes. 

O tamanho do vetor sempre deve ser um inteiro constante, pois o compilador precisa desta informação. Sendo assim, o valor entre os colchetes não pode ser uma variável. Para saber se um valor é conhecido durante a compilação, é útil declarar constantes usando, no lugar de `const`, a palavra-chave `constexpr`. Por exemplo: `constexpr int Max = rand();` não funciona, pois `rand()` é definido durante a execução do programa.



---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab10/Lab10.pdf).