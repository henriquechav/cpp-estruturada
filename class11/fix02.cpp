#include <iostream>
using namespace std;

int main()
{
    char name[40], grade;
    cout << "Qual é o nome? ";
    cin.getline(name, 40);
    cout << "Que conceito você merece? ";
    cin.get(grade);

    grade = grade + 1;
    cout << "Bom dia, " << name << ". Seu conceito é " << grade << ".\n";

    return 0;
}
