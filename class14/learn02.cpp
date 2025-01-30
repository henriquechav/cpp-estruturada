#include <iostream>
#include <iomanip>
using namespace std;

struct timetable
{
    int hour;
    int minute;
};

void showHour(timetable*);

int main()
{
    timetable now;
    timetable *ptr = &now;

    cout << "Digite que horas são: ";
    cin >> now.hour;
    cin.ignore();
    cin >> now.minute;

    showHour(ptr);

    return 0;
}

void showHour(timetable *ptr)
{
    ptr->hour = (ptr->hour + 1) % 12;
    cout << "Seu relógio está atrasado, o horário correto é ";
    cout << setw(2) << setfill('0') << ptr->hour << ":";
    cout << setw(2) << setfill('0') << ptr->minute << ".\n";
}
