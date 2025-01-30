#include <iostream>
using namespace std;

struct fish 
{
    char type[20];
    float weight;
    int length;
};

int main()
{
    fish nemo = {"peixe-palhaço", 0.4f, 5};
    fish * p = &nemo;

    cout << "O peixe é do tipo " << p->type << ", pesa " << p->weight
         << " e tem " << p->length << " de comprimento.\n";

    return 0;
}
