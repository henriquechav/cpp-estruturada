# Aula 15

Conteúdo: alocação dinâmica de memória; operadores `new` e `delete`; vetores dinâmicos.

"O verdadeiro poder dos ponteiros está em apontar para memória não rotulada, alocada durante a execução do programa." — Judson

## Alocação de memória

Há duas formas de alocação de memória: automática e dinâmica. A primeira é a que tenho usado até agora. Ela ocorre cada vez que uma função é chamada, então todas as suas variáveis são alocadas automaticamente na memória. 

Já a alocação dinâmica de memória é feita usando o operador `new`, que retorna o endereço da região alocada, o qual posso armazenar em um ponteiro para manipulá-la. Após o manejo, posso liberar a memória com o operador `delete`.

A alocação dinâmica é feita como no exemplo: `int *ptr = new int;`. Para cada uso de `new`, preciso liberar a memória depois de usá-la com `delete ptr;`. O `delete` requer o endereço da memória liberada.

Caso a memória não seja liberada, e o ponteiro passe a apontar para outros endereços alocados, dizemos que há vazamento de memória (*memory leak*). Se isso acontece repetidas vezes, pode acontecer do sistema ficar sem mais espaços para novas alocações e dar pane. Exemplo de vazamento de memória:

```
int *p = new int; // aloca memória
*p = 30;
cout << *p;

p = new int; // memory leak
*p = 50;
cout << *p;
delete p; // libera última alocação
```

## Vetores dinâmicos

Diferentemente dos vetores estáticos, posso definir o tamanho de um vetor dinâmico a qualquer momento, posso, inclusive, definir um tamanho lido do usuário.

A declaração: `int * vet = new int [20];`; onde `vet` é o nome do ponteiro e do vetor, e o número entre colchetes (tamanho do vetor) pode ser uma variável.

Os vetores estáticos não podem ser de um tamanho definido pelo usuário devido à natureza da alocação automática de memória, que acontece cada vez que uma função é chamada, e não durante a execução do programa.

A liberação de memória de um vetor dinâmico é feita com a notação especial: `delete [] vet;`.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab15/Lab15.pdf).
