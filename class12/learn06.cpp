#include <iostream>
using namespace std;

struct timetable
{
    int hour;
    int minute;
};

int operator-(timetable, timetable);
istream& operator>>(istream&, timetable&);
ostream& operator<<(ostream&, timetable&);

int main()
{
    timetable start, end;
    cout << "Início: ";
    cin >> start;
    cout << "Fim: ";
    cin >> end;

    int interval = start - end;

    cout << "\nEntre " << start << " e " << end << " existem "
         << interval << " minutos, isto é, " << interval / 60
         << "h e " << interval % 60 << " minutos.\n\n";

    return 0;
}

int operator-(timetable start, timetable end)
{
    return (end.hour - start.hour) * 60 + (end.minute - start.minute);
}

istream& operator>>(istream& is, timetable &t)
{
    is >> t.hour; is.ignore(); is >> t.minute;
    return is;
}

ostream& operator<<(ostream& os, timetable &t)
{
    os << t.hour << ":" << t.minute;
    return os;
}
