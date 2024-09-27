# Class 05 - Functions and libs

## Dividing functions into several files

- First, we need to create a file with `.h` as extension containing the functions' prototypes. Example: `ginastica.h`.

- We also need to create a source file containing the functions' definitions. For example, `ginastica.cpp`.

- At last, we create the main file with the `main()` function and including the prototypes file with `#include "ginastica.h"`.

## Global and local variables

Variables declared out of any function's body are called global variables. Those which are declared inside functions are called local variables. When we write a variable's name, the preference is for using the local one. But if it doesn't exist, the global corresponding is used.

---

Exercises can be found [here](https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab05/Lab05.pdf).
