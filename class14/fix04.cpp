#include <iostream>
using namespace std;

// tipo cor pode ser armazenado como rgba ou int32
// ambos com 32 bits
union color
{
    struct
    {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    } rgba;
    unsigned int32;
};

void readRGBA(color*);
void readInt32(color*);

int main()
{
    color c;
    color *p = &c;

    // programa recebe rgba e converte para int32, e vice-versa
    cout << "Digite uma cor no formato requerido.\n\n";
    
    readRGBA(p);
    cout << "Int32: " << p->int32 << endl;
    cout << endl;
    
    readInt32(p);
    cout << "RGBA: " 
         << int(p->rgba.r) << ' '
         << int(p->rgba.g) << ' '
         << int(p->rgba.b) << ' '
         << int(p->rgba.a) << endl;
    
    cout << endl;
    return 0;
}

void readRGBA(color *p)
{
    cout << "RGBA: ";
    int temp;
    cin >> temp;
    p->rgba.r = char(temp);
    cin >> temp;
    p->rgba.g = char(temp);
    cin >> temp;
    p->rgba.b = char(temp);
    cin >> temp;
    p->rgba.a = char(temp);
}

void readInt32(color *p)
{
    cout << "Int32: ";
    cin >> p->int32;
}
