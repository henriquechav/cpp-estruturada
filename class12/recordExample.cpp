#include <iostream>
using namespace std;

struct player
{
    char name[40];
    float salary;
    unsigned goals;
};

int main()
{
    player a = {"Bebeto", 200000, 600};
    player b = {"Romário", 300000, 800};

    cout << "Contratações para o próximo ano: " << a.name << " e " << b.name << "!\n";
    cout << "Preço da aquisição: R$" << a.salary + b.salary << "!\n";

    return 0;
}
