# Aula 10

Conteúdo: vetores; `const` *versus* `constexpr`; vector e array.

## Vetores

Os vetores são um dos tipos compostos (tipo derivado) que existem no C++. Outros são: strings, registros, uniões e enumerações. Eles servem para armazenar conjuntos de muitos valores baseados nos tipos básicos.

Os vetores guardam um conjunto de valores do mesmo tipo básico. Por exemplo: 30 valores do tipo `float` para representar as notas de 30 alunos. Um exemplo de declaração de vetor: `int visitas[365];`. O tipo dos valores é seguido do nome do vetor com a quantidade de valores entre colchetes. 

O tamanho do vetor sempre deve ser um inteiro constante, pois o compilador precisa desta informação. Sendo assim, o valor entre os colchetes não pode ser uma variável. Para saber se um valor é conhecido durante a compilação, é útil declarar constantes usando, no lugar de `const`, a palavra-chave `constexpr`. Por exemplo: `constexpr int Max = rand();` não funciona, pois `rand()` é definido durante a execução do programa.

Pode-se inicializar vetores com a notação de chaves. Exemplo: `int vet[3] = {1, 2, 3};`. Mas esta notação não pode ser usada para atribuir valores ao vetor após ele ter sido declarado. Neste caso, apenas podem ser feitas atribuições individuais a cada posição. Essa inicialização pode ser feita parcialmente, colocando só alguns elementos entre as chaves, e os demais são automaticamente substituídos por zeros (limpando o lixo da memória). 

Outro ponto importante: não se pode atribuir um vetor a outro. Pois o endereço da memória rotulado pelo nome do vetor não pode ser modificado após sua criação. Além disso, deve-se tomar muito cuidado para não acessar posições inválidas dos vetores, isso pode gerar erros imprevisíveis.

## Funções e vetores

Vetores podem ser usados como parâmetros de funções. Deve-se usar colchetes nos protótipos, por exemplo: `int somaVetor(int []);`. O mesmo vale para a definição da função, com a exceção de que deve-se criar também um nome para o vetor. Não é necessário indicar o tamanho do vetor entre os parênteses porque, na verdade, é o endereço do primeiro elemento do vetor que é passado como argumento.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab10/Lab10.pdf).