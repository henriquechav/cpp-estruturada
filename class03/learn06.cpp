#include <iostream>
using namespace std;

int main()
{
    int sidea, sideb, height, basearea, volume;

    cout << "Lado a: ";
    cin >> sidea;

    cout << "Lado b: ";
    cin >> sideb;

    basearea = sidea * sideb;
    cout << "Área da base = " << basearea << endl;

    cout << "Altura: ";
    cin >> height;

    volume = basearea * height;
    cout << "Volume do prisma = " << volume << endl;
}
