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

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab13/Lab13.pdf).
