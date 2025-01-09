#include <iostream>
using namespace std;

long long calculate(long long, long long);

int main()
{
    long long result = 200530 * 420800LL;
    cout << "Direto: " << result << endl;
    cout << "Função: " << calculate(200530, 420800) << endl;

    return 0;
}

long long calculate(long long a, long long b)
{
    return a * b;
}
