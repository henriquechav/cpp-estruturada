#include <iostream>
using namespace std;

int main()
{
    int *pnum = new int {100};
    cout << "Conteúdo armazenado: " << *pnum << endl;
    
    cout << "Digite novo valor para esse bloco de memória: ";
    cin >> *pnum;
    
    cout << "Novo conteúdo armazenado: " << *pnum << endl;
    delete pnum;

    return 0;
}
