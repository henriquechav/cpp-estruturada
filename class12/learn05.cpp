#include <iostream>
using namespace std;

struct date 
{
    int day;
    int month;
    int year;
};

struct timetable
{
    int hour;
    int minute;
    int second;
};

struct event
{
    date calendar;
    timetable time;
    char place[30];
};

int main()
{
    event e;
    cout << "Entre com os dados do evento.\n";
    cout << "Data: ";
    cin >> e.calendar.day; cin.ignore();
    cin >> e.calendar.month; cin.ignore();
    cin >> e.calendar.year;
    cout << "Hora: ";
    cin >> e.time.hour; cin.ignore();
    cin >> e.time.minute; cin.ignore();
    cin >> e.time.second; cin.ignore();
    cout << "Lugar: ";
    cin.getline(e.place, 30);

    cout << endl << "Confimando...\n";
    cout << "No dia " << e.calendar.day << "/" << e.calendar.month << "/" << e.calendar.year;
    cout << " às " << e.time.hour << ":" << e.time.minute << ":" << e.time.second;
    cout << " acontecerá o evento em " << e.place << ".\n\n";

    return 0;
}
