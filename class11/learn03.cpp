#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[20], date[11];
    cout << "Nome: ";
    cin.getline(name, 20);
    cout << "Data: ";
    cin >> date;

    char result[50] = {};
    strcat(result, name);
    strcat(result, " esteve aqui em ");
    strcat(result, date);
    strcat(result, ".\n");

    cout << result;

    return 0;
}
