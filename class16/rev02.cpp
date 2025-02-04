#include <iostream>
using namespace std;

int main()
{
    char str[15] = "Pratique muito";

    for (int i = 0; str[i] != '\0'; i++)
        cout << str[i];
    cout << endl;

    return 0;
}
