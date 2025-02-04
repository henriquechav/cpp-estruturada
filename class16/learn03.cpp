#include <iostream>
using namespace std;

int main()
{
    int A[] = {46,78,40,96,74,58,32,56,91,6};
    int *B = A + 1;

    for (int i = 0; i < 10; i = i + 2)
        cout << "[" << *(A+i) << "," << *(B+i) << "] ";
    cout << endl;

    return 0;
}
