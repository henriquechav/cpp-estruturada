#include <iostream>
using namespace std;

int main()
{
    cout << "Entre com o número de linhas: ";
    unsigned amount;
    cin >> amount;

    for (int line = 1; line < (amount + 1); line++)
    {
        for (int dot = 0; dot < (amount - line); dot++)
            cout << '.';
        
        for (int star = 0; star < line; star++)
            cout << '*';

        cout << endl;
    }

    return 0;
}
