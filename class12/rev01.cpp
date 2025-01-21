#include <iostream>
using namespace std;

struct complex 
{
    float real;
    float imaginary;
};

complex readComplex(void);
void writeComplex(complex);
complex sumComplex(complex, complex);
complex multComplex(complex, complex);

int main()
{
    complex a, b;
    cout << "Primeiro complexo: ";
    a = readComplex();
    cout << "Segundo complexo: ";
    b = readComplex();

    complex result;

    cout << "A soma dos números: ";
    result = sumComplex(a, b);
    writeComplex(result);
    cout << endl;

    cout << "A multiplicação dos números: ";
    result = multComplex(a, b);
    writeComplex(result);
    cout << endl;

    return 0;
}

complex readComplex()
{
    complex c;
    cin >> c.real;
    cin >> c.imaginary;
    cin.ignore();
    return c;
}

void writeComplex(complex c)
{
    cout << c.real;
    cout << showpos;
    cout << c.imaginary;
    cout << noshowpos;
    cout << "i";
}

complex sumComplex(complex a, complex b)
{
    complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

complex multComplex(complex a, complex b)
{
    complex result;
    result.real = a.real*b.real - a.imaginary*b.imaginary;
    result.imaginary = a.imaginary*b.real + a.real*b.imaginary;
    return result;
}
