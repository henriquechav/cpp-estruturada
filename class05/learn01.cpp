#include <iostream>
using namespace std;

int main()
{
    // initializing a variable without assigning any value to it
    // reserves a memory address containing garbage
    int x;
    x = 1;

    // when initializing and assigning a value to it at the same time
    // it doesn't occur.
    int y = 2;

    return 0;
}
