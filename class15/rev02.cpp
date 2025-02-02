#include <iostream>
using namespace std;

struct fish
{
    char type[20];
    float weight;
    unsigned length;
};

int main()
{
    // criando uma variável do tipo peixe
    fish nemo;

    // alocando dinamicamente um tipo peixe
    fish *dory = new fish;
    delete dory;

    return 0;
}
