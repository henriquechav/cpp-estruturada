#include <iostream>
using namespace std;

int main()
{
    int B[] = {32,16,47,10,82,29,30,28,15,64};

    for (int i = 0; i < 5; i++) {
        cout << "[" << B[i] << "," << B[9-i] << "] ";
    }

    cout << endl;
    return 0;
}
