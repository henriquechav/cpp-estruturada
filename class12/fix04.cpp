#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

int operator-(date, date);
istream& operator>>(istream&, date&);
ostream& operator<<(ostream&, date&);

int main()
{
    date birth, current;
    cout << "Data de nascimento: ";
    cin >> birth;
    cout << "Data de hoje: ";
    cin >> current;

    cout << "Calculando dias entre " << birth << " e " << current << ".\n";
    cout << "Você tem " << birth - current << " dias de vida.\n";

    return 0;
}

int operator-(date previous, date current)
{
    int total = 0;
    total += (current.year - previous.year) * 12 * 31;
    total += (current.month - previous.month) * 31;
    total += current.day - previous.day;
    return total;
}

istream& operator>>(istream& is, date &d)
{
    cin >> d.day;
    cin.ignore();
    cin >> d.month;
    cin.ignore();
    cin >> d.year;
    return is;
}

ostream& operator<<(ostream& os, date&d)
{
    os << d.day << "/" << d.month << "/" << d.year; 
    return os;
}
