# Class 06

## Integer types

Since C++ is object oriented, which means types are created to match data they need to represent, it offers several integer types, varying their width occupied in memory: `char`, `short`, `int`, `long` and `long long`.

Each one can be `signed`, being able to represent both negative and positive numbers, or they can be `unsigned`, being able to represent only positive numbers. `char` is more used to represent non-numerical characters. Depending on system, the minimun width of each type:

- `short` is at least 16 bits wide;
- `int` is at least as big as `short`;
- `long` is at least 32 bits wide and is at least as big as `int`;
- `long long` is at least 64 bits wide and is at least as big as `long`.

We can write a program to discover these sizes using C++'s resources. The `sizeof` operator applied in a type or a variable returns its size in bytes. Remembering that bytes in C++ also have their size dependent on the system's character set; for example, ASCII has 8 bits while Unicode has 16 bits. The sizes can also be discovered by using `climits` header file, as an example in this folder (`limits.cpp`).
