#include <iostream>
using namespace std;

int main()
{
    double * triple = new double [3];
    triple[0] = 0.2;
    triple[1] = 0.5;
    triple[2] = 0.8;

    cout << "triple[1] = " << triple[1] << endl;
    triple = triple + 1;
    cout << "Agora triple[0] = " << triple[0] << endl;
    cout << "Agora triple[1] = " << triple[1] << endl;
    triple = triple - 1;

    delete [] triple;

    return 0;
}
