// exceeding some integer limits - overflow and underflow
#include <iostream>
#include <climits>
using namespace std;

#define ZERO 0

int main()
{
    short pedro = SHRT_MAX;
    unsigned short maria = pedro;

    cout << "Pedro tem " << pedro << " reais.\n";
    cout << "Maria tem " << maria << " reais.\n";

    cout << "\nAdicionando 1 real para cada um...\n\n";
    pedro = pedro + 1;
    maria = maria + 1;

    cout << "Agora Pedro tem " << pedro << " reais.\n";
    cout << "Agora Maria tem " << maria << " reais.\n";

    cout << "\nZerando a conta de cada um...\n\n";
    pedro = ZERO;
    maria = ZERO;

    cout << "Pedro tem " << pedro << " reais.\n";
    cout << "Maria tem " << maria << " reais.\n";

    cout << "\nTirando 1 real de cada...\n\n";
    pedro = pedro - 1;
    maria = maria - 1;

    cout << "Agora Pedro tem " << pedro << " reais.\n";
    cout << "Agora Maria tem " << maria << " reais.\n\n";

    return 0;
}
