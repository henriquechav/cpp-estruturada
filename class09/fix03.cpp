#include <iostream>
using namespace std;

int main()
{
    const int HOURS_PER_DAY = 24;
    const int MINUTES_PER_HOUR = 60;
    const int SECONDS_PER_MINUTE = 60;
    
    int totalSeconds;
    cout << "Entre com o número de segundos: ";
    cin >> totalSeconds;

    int days, hours, minutes, seconds;
    
    minutes = totalSeconds / SECONDS_PER_MINUTE;
    seconds = totalSeconds % SECONDS_PER_MINUTE;

    hours = minutes / MINUTES_PER_HOUR;
    minutes = minutes % MINUTES_PER_HOUR;

    days = hours / HOURS_PER_DAY;
    hours = hours % HOURS_PER_DAY;

    cout << totalSeconds << " segundos = " << days << " dias, ";
    cout << hours << " horas, " << minutes << " minutos e ";
    cout << seconds << " segundos\n";

    return 0;
}
