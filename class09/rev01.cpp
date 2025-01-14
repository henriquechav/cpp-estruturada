#include <iostream>
using namespace std;

int main()
{
    long a = 2009032809;
    float b = a;
    double c = a;

    cout << "valor long: " << a << endl;
    cout << endl;

    cout << "Mostrando em formato científico:\n";
    cout << "valor float: " << b << endl;
    cout << "valor double: " << c << endl;
    cout << endl;

    cout << "Mostrando no formato decimal:\n";
    cout << fixed;
    cout.precision(0);
    cout << "valor float: " << b << endl;
    cout << "valor double: " << c << endl;

    // Os formatos são iguais em formato científico porque
    // apenas seis dígitos significativos são mostrados e,
    // até aí, o float está tão certo quanto o double.
    
    // Mas, quando mostramos todo o valor contido nas variáveis,
    // somente o double, com sua maior precisão, armazenou o 
    // valor corretamente.

    return 0;
}
