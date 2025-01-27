# Aula 13

Conteúdo: uniões e enumerações; união *versus* registro; enumerações com escopo.

## Uniões

As uniões, como os registros, armazenam diferentes tipos de dados. Elas podem ser declaradas como exemplificado a seguir:

```
union identificador
{
    char ch;
    int num;
    double frac;
};
```

A diferença entre uma união e um registro é que, ao passo que os registros armazenam um valor em todos os seus membros, no caso das uniões só um dos membros pode ser armazenado por vez. Uma união ocupa o mesmo espaço de memória que o seu maior membro. Cada atribuição a um membro de uma união sobrescreve, se houver, o valor da atribuição anterior. A inicialização de uma união deve fornecer só um valor.

As uniões caem como uma luva em situações onde um valor pode assumir dois formatos, mas não simultaneamente. O uso deste tipo composto ajuda a economizar a memória que seria desperdiçada com a criação de mais de uma variável.

## Enumerações

Enumerações são estruturas que permitem duas coisas: (i) criar uma série de constantes de modo rápido e (ii) criar um novo tipo de dado a cuja variável pode ser atribuído um conjunto limitado de valores. Declara-se uma enumeração como abaixo:

```
enum cores {vermelho, amarelo, verde, azul, preto};
```

Seria equivalente o trecho abaixo:

```
const int vermelho = 0;
const int amarelo = 1;
const int verde = 2;
const int azul = 3;
cont int preto = 4;
```

Além disso, pode-se criar uma variável do tipo `cores` que apenas recebe os valores entre chaves. Também é possível atribuir os valores das constantes ao declarar a enumeração, e, inclusive, os valores podem ser repetidos, como `enum cores {vermelho=200, verde=200, azul=150};`.

Não podemos atribuir um valor inteiro a uma variável do tipo enumeração, ao menos não sem convertê-la para o tipo em questão. Costumamos usar as constantes definidas na declaração da enumeração.

```
cores tinta; // declaração
tinta = azul; // válido
tinta = 3; // inválido
tinta = cores (3); // válido
```

Esse tipo de enumeração clássica tem alguns problemas: (i) duas enumerações podem ter nomes de constantes iguais; (ii) o tipo de dado das constantes depende da implementação do compilador; (iii) as constantes não são do tipo `enum`, o que poderia ser presumido pelo usuário. A partir do C++11 surgiram, para resolver estes problemas, as enumerações com escopo.

### Enumerações com escopo

Quando não indicado, os enumeradores são do tipo `int`. As enumerações com escopo são declaradas como abaixo:

```
// 'enum class' e 'enum struct' são equivalentes
enum class pacote { pequeno, grande, largo, jumbo };
enum struct camisa { pequena, media, grande, extragrande };
```

Para usar os enumeradores o escopo deve ser explicitado.

```
pacote leite = pacote::grande;
camisa promo = camisa::grande;
```

Os enumeradores com escopo também não podem ser convertidos implicitamente.

```
int tamanho = camisa::media; // conversão implícita emite erro
int carga = int(pacote::jumbo); // válido
```

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab13/Lab13.pdf).
