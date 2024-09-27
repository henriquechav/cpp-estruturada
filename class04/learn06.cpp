#include <iostream>
#include <cstdlib>
using namespace std;

int Initiate(void);
void turnon(void);
void verify(void);
void activate(void);

int main()
{
    int result = Initiate();

    if (result > 16384) {
        cout << "\nSistema em funcionamento.\n";
    } else {
        cout << "\nFalha na inicialização.\n";
    }

    return 0;
}

int Initiate()
{
    cout << "Inicializando sistema:\n";
    turnon();
    verify();
    activate();
    cout << "Inicialização concluída\n";

    return rand();
}

void turnon()
{
    cout << "- Ligando dispositivos\n";
}

void verify()
{
    cout << "- Verificando integridade\n";
}

void activate()
{
    cout << "- Ativando processos\n";
}
