#include <iostream>
using namespace std;

struct event
{
    struct {
        int day, month, year;
    } date;
    struct {
        int hour, minute;
    } time;
    char desc[18];
};

istream& operator>>(istream&, event&);
ostream& operator<<(ostream&, event&);

int main()
{
    event events[10];

    cout << "Entre com 2 eventos:\n";
    cout << "#1\n";
    cin >> events[0];
    cout << "#2\n";
    cin >> events[1];

    cout << "--------------------\n";
    cout << "Eventos cadastrados:\n";
    cout << events[0] << endl;
    cout << events[1] << endl;

    return 0;
}

istream& operator>>(istream& is, event &e)
{
    cout << "Data: ";
    is >> e.date.day >> e.date.month >> e.date.year;
    cout << "Hora: ";
    is >> e.time.hour >> e.time.minute;
    is.ignore();
    cout << "Desc: ";
    is.getline(e.desc, 18);
    return is;
}

ostream& operator<<(ostream& os, event &e)
{
    os << e.date.day << "/" << e.date.month << "/" << e.date.year
       << " " << e.time.hour << ":" << e.time.minute << " "
       << e.desc;
    return os;
}
