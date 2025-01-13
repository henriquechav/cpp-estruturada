#include <iostream>
using namespace std;

int main()
{
    float gallons;
    cout << "Digite a quantidade de galões de água: ";
    cin >> gallons;

    // water molecules = (total grams of water) / grams of a molecule of water
    float waterMolecules = (gallons / 0.25 * 950) / 3e-23;
    cout << "Em " << gallons << " galões existem " << waterMolecules << " moléculas de água.\n";

    return 0;
}

