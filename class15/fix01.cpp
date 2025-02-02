#include <iostream>
using namespace std;

int main()
{
    cout << "Digite o número de alunos (mínimo 2): ";
    unsigned amount;
    cin >> amount;

    float *grades = new float [amount];

    cout << "Digite a nota de dois alunos:\n";
    cin >> grades[0] >> grades[1];

    cout << "As notas digitadas foram " << grades[0]
         << " e " << grades[1] << ".\n";

    delete [] grades;

    return 0;
}
