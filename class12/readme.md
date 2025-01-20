# Aula 12

Conteúdo: registros; `struct`; criação de tipos; vetores de registros.

## Registros

O registro define um novo tipo de dado e agrupa informações de tipo possivelmente diferentes. Abaixo um exemplo de declaração de um registro com seus membros entre chaves:

```
struct jogador 
{
    char nome[20];
    float salario;
    unsigned gols;
};
```

Os membros dos registros são declarados como variáveis, e podem ser vetores ou, ainda, outros registros. Fica evidente a natureza flexível dos registros. Após declarado, podemos criar novas variáveis desse tipo: `jogador pele, zico, bebeto;`. É alocado espaço suficiente na memória para armazenar cada um dos membros da variável. Cada membro (ou campo) pode ser acessado usando o operador membro `.`, por exemplo `zico.salario`.

É possível usar registros como parâmetros e retornos de funções e, além disso, um registro pode ser atribuído para outro como uma simples variável.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab12/Lab12.pdf).
