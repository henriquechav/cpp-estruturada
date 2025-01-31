# Aula 15

Conteúdo: alocação dinâmica de memória; operadores `new` e `delete`; vetores dinâmicos.

"O verdadeiro poder dos ponteiros está em apontar para memória não rotulada, alocada durante a execução do programa." — Judson

## Alocação de memória

Há duas formas de alocação de memória: automática e dinâmica. A primeira é a que tenho usado até agora. Ela ocorre cada vez que uma função é chamada, então todas as suas variáveis são alocadas automaticamente na memória. 

Já a alocação dinâmica de memória é feita usando o operador `new`, que retorna o endereço da região alocada, o qual posso armazenar em um ponteiro para manipulá-la. Após o manejo, posso liberar a memória com o operador `delete`.

A alocação dinâmica é feita como no exemplo: `int *ptr = new int;`. Para cada uso de `new`, preciso liberar a memória depois de usá-la com `delete ptr;`. O `delete` requer o endereço da memória liberada.

---

Os exercícios podem ser encontrados [aqui](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab15/Lab15.pdf).
