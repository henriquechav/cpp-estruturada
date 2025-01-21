#include <iostream>
using namespace std;

struct complex 
{
    float real;
    float imaginary;
};

istream& operator>>(istream&, complex&);
ostream& operator<<(ostream&, complex&);
complex operator+(complex, complex);
complex operator*(complex, complex);

int main()
{
    complex a, b;
    cout << "Primeiro complexo: ";
    cin >> a;
    cout << "Segundo complexo: ";
    cin >> b;

    complex result;
    result = a + b;
    cout << "A soma dos números: " << result << endl;
    result = a * b;
    cout << "A multiplicação dos números: " << result << endl;

    return 0;
}

istream& operator>>(istream& is, complex &c)
{
    cin >> c.real;
    cin >> c.imaginary;
    cin.ignore();
    return is;
}

ostream& operator<<(ostream& os, complex &c)
{
    os << c.real;
    os << showpos;
    os << c.imaginary;
    os << noshowpos;
    os << "i";
    return os;
}

complex operator+(complex a, complex b)
{
    complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

complex operator*(complex a, complex b)
{
    complex result;
    result.real = a.real*b.real - a.imaginary*b.imaginary;
    result.imaginary = a.imaginary*b.real + a.real*b.imaginary;
    return result;
}
