// minha aposta de saída: 
// valor: 20
// soma: 20
#include <iostream>
using namespace std;

int main()
{
    int valor = 10, *temp, soma = 0;
    temp = &valor;
    *temp = 20;
    temp = &soma;
    *temp = valor;
    cout << "valor: " << valor << "\nsoma: " << soma;
    cout << endl;

    return 0;
}
