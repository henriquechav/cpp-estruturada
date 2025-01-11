#include <iostream>
using namespace std;

int main()
{
    unsigned char state = 1;
    state = ~state;

    cout << (int) state << endl;

    return 0;
}
