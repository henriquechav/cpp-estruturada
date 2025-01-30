#include <iostream>
using namespace std;

int main()
{
    int * ptr = (int*) 0x01;
    cout << *ptr;

    // Segmentation fault (core dumped)

    return 0;
}
