#include <iostream>
#include <cmath>
using namespace std;

float imc(float, float);
double imc(double, double);

int main()
{
    float fltResult = imc(1.75f, 80.0f);
    double dblResult = imc(1.75, 80.0);

    cout << "Exibição padrão do IMC para 1.75m e 85kg: \n";
    cout << "float: " << fltResult << endl;
    cout << "double: " << dblResult << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(10);
    
    cout << "Exibição com 10 dígitos: \n";
    cout << "float: " << fltResult << endl;
    cout << "double: " << dblResult << endl;

    // RESPOSTAS

    // Como você explica a diferença nos resultados obtidos?
    // O resultado obtido usando double é preciso em toda sua extensão,
    // ao passo que o resultado obtido usando float deixa de ser confiável
    // a partir do sexto dígito significativo.

    // O programa está fazendo algum tipo de arredondamento?
    // Sim, no caso do double o último dígito foi arredondado.

    // O resultado obtido com valores float está correto?
    // Somente até os seis primeiros dígitos.

    // Usar float para economizar memória ou usar double para mais precisão?
    // Isso depende dos objetivos do programa, se precisa ser rápido ou preciso.
    
    return 0;
}

float imc(float height, float weight)
{
    return weight / pow(height, 2);
}

double imc(double height, double weight)
{
    return weight / pow(height, 2);
}
