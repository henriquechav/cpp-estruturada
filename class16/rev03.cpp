#include <iostream>
using namespace std;

void showFiveElements(int[]);
void showElements(int[], int);

int main()
{
    int vec[] = {15, 29, 48, 10, 35};

    showFiveElements(vec);

    return 0;
}

void showFiveElements(int v[])
{
    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;
}

void showElements(int v[], int size)
{
    for (int i = 0; i < size; i++)
        cout << v[i] << " ";
    cout << endl;
}
