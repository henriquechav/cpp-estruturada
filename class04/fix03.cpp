#include <iostream>
using namespace std;

void OneThree(void);
void Two(void);

int main()
{
    cout << "Começando agora:\n";
    OneThree();
    cout << "Pronto!\n";

    return 0;
}

void OneThree(void)
{
    cout << "Um ";
    Two();
    cout << "Três\n";
}

void Two()
{
    cout << "Dois ";
}
