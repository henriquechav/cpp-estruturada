#include <iostream>
using namespace std;

struct balloon
{
    float diameter;
    char brand[20];
    int model;
};

int main()
{
    cout << "Entre com os dados do balão (diâmetro, marca e número do modelo):\n";
    balloon *pbal = new balloon;
    cin >> pbal->diameter >> pbal->brand >> pbal->model;

    cout << "\nEntão o balão em questão é da marca " << pbal->brand 
         << " modelo número " << pbal->model << " e tem " << pbal->diameter
         << " de diâmetro.\n";

    delete pbal;

    return 0;
}
