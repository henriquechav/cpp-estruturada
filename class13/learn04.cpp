#include <iostream>
using namespace std;

enum week {MON, TUE, WED, THU, FRI, SAT, SUN};

int main()
{
    char days[7][10] = {
        "Segunda", "Terça", "Quarta", "Quinta", 
        "Sexta", "Sábado", "Domingo"
    };

    for (week d = MON; d <= SUN; d = week(d + 1))
        cout << days[d] << endl;

    return 0;
}
