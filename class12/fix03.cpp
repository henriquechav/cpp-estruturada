#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

int daysBetweenDates(date, date);
istream& operator>>(istream&, date&);

int main()
{
    date birth, current;
    cout << "Data de nascimento: ";
    cin >> birth;
    cout << "Data de hoje: ";
    cin >> current;

    cout << "Você tem " << daysBetweenDates(birth, current) << " dias de vida.\n";

    return 0;
}

int daysBetweenDates(date previous, date current)
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
