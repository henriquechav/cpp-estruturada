#include <iostream>
using namespace std;

struct bowl
{
    bool isFull;
    bool isSoup;
};

void hunger(bowl*);
void write(bowl*);

int main()
{
    bowl dinner = {true, true};
    bowl *ptr = &dinner;

    cout << "Antes da janta: ";
    write(ptr);
    cout << endl;

    hunger(ptr);

    cout << "Depois da janta: ";
    write(ptr);
    cout << endl;

    return 0;
}

void hunger(bowl *p)
{
    p->isFull = false;
}

void write(bowl *p)
{
    cout << "A tigela está ";
    if (p->isFull)
        cout << "cheia. ";
    else 
        cout << "vazia. ";
    
    cout << "E a comida ";
    if (p->isSoup)
        cout << "é sopa. ";
    else 
        cout << "não é sopa. ";
}
