// O laço exibiria o seguinte:
// 0369
// 12

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int j;
    for (j = 0; j < 11; j += 3)
        cout << j;
    cout << endl << j << endl;

    return 0;
}
