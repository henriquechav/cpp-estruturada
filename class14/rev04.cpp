#include <iostream>
using namespace std;

struct fish
{
    char type[20];
    float weight;
    int length;
};

void writeFish(fish);
void writeFish(fish*);

int main()
{
    fish nemo = {"Piaba", 6.2f, 5};
    fish * p = &nemo;   

    writeFish(nemo);
    writeFish(p);

    return 0;
}

void writeFish(fish f)
{
    cout << "Sem ponteiro: " << f.type << " com " << f.weight
         << "g e " << f.length << "cm\n";
}

void writeFish(fish * p)
{
    cout << "Com ponteiro: " << p->type << " com " << p->weight
         << "g e " << p->length << "cm\n";
}
