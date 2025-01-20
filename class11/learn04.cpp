#include <iostream>
#include <cstring>
using namespace std;

bool isChristmas(char []);

int main()
{
    const int SIZE = 20;
    char holiday1[SIZE], holiday2[SIZE], holiday3[SIZE];
    cout << "Quais suas datas comemorativas favoritas?\n";
    cin.getline(holiday1, SIZE);
    cin.getline(holiday2, SIZE);
    cin.getline(holiday3, SIZE);

    char result[50] = "";
    strcat(result, holiday1);
    strcat(result, ", ");
    strcat(result, holiday2);
    strcat(result, " e ");
    strcat(result, holiday3);
    strcat(result, " são belas festas.\n");

    cout << result;

    if (isChristmas(holiday1) || isChristmas(holiday2) || isChristmas(holiday3))
        cout << "O Natal também é uma das minhas datas preferidas!\n";

    return 0;
}

bool isChristmas(char holiday[])
{
    return !strcmp(holiday, "Natal");
}
