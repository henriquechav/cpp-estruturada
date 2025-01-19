#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char feline[20] = "Tigre";
    char animal[20];

    strcpy(animal, feline);
    strcpy(feline, "Jaguar");

    cout << "Felino: " << feline << endl;
    cout << "Animal: " << animal << endl;

    return 0;
}
