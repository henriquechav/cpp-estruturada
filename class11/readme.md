# Aula 16

Conteúdo: strings; vetores de caracteres; tipo `string`.

## Strings

Strings são simplesmente vetores de caracteres. Mas uma importante propriedade é terminar com o caractere nulo `'\0'`, caso contrário o vetor não é classificado como string. O caractere nulo delimita o fim de uma string para as funções que manipulam este tipo, incluindo o `cout`. Toda constante do tipo string, por exemplo `"string"`, contém no seu final um caractere nulo implícito.

### Leitura de strings

A função `cin` lê do usuário palavras até o primeiro espaço vazio. Isso é um problema quando deseja-se gravar duas palavras ou mais numa mesma variável. Por isso existe, para ler uma linha inteira, a função `cin.getline(vetor, capacidade)`. Essa função exige o vetor de caracteres e sua capacidade máxima como argumentos.

Atenção: quando `cin` e `cin.getline()` são usados juntos pode haver um comportamento inesperado, pois o `cin`, após recuperar um valor do buffer, deixa lá o caractere `'\n'`. Outro `cin` é capaz de ignorar espaço vazio no começo da leitura, mas o mesmo não pode ser dito do `cin.getline()`. Sendo assim, caso seja usado depois de um `cin`, o `cin.getline()` lerá um valor vazio.

Esse problema pode ser resolvido com a instrução `cin.get();` depois do `cin` ter sido usado. Assim, um caractere (no caso `'\n'`) é lido e descartado do buffer. Caso se queira guardar o caractere lido, basta passar uma variável do tipo `char` como argumento para o `cin.get(ch)`. O `cin.ignore();` pode ser usado do mesmo jeito.

### Atribuição e cópia

Uma vez que, depois de declarada, não é possível atribuir uma string à outra (como em quaisquer vetores) e também não se pode atribuir uma string constante, existe a função `strcpy(destino, origem)`. Deve-se tomar cuidado para não copiar uma origem que seja maior do que o destino, pois a função não realiza verificações quanto a isso, o que costuma ser uma grande fonte de erros.

Também é possível concatenar uma string à outra com `strcat(string, sufixo)`.

### Tipo `string`

O tipo `string` foi introduzido pelo padrão C++98 para facilitar o tratamento de strings. Trata-se de uma classe que, para ser usada, exige a inclusão do arquivo de cabeçalho `#include <string>`. O C++ é a linguagem com a implementação mais performática desse tipo, mas, como em qualquer abstração, ela vem acompanhada com um certo custo computacional.

O uso desse tipo é idêntico ao uso do vetor de caracteres em muitos aspectos, com exceção da atribuição que pode ser feita de modo intuitivo (`string1 = string2;`). Também é possível concatenar strings com o operador `+` e recuperar seu tamanho com o método `string.size()`.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab11/Lab11.pdf).
