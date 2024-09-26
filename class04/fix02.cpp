#include <iostream>
using namespace std;

void Line(void);
void Small(void);
void Medium(void);
void Big(void);

int main()
{
    Small();
    Medium();
    Big();

    cout << "Programação de Computadores\n";
    
    Big();
    Medium();
    Small();

    return 0;
}

void Line()
{
    cout << "----------";
}

void Small()
{
    Line();
    cout << endl;
}

void Medium()
{
    Line();
    Line();
    cout << endl;
}

void Big()
{
    Line();
    Line();
    Line();
    cout << endl;
}
