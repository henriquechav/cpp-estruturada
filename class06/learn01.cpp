#include <iostream>
using namespace std;

#define MINPERHOUR 60

int main()
{
    int departureHour, departureMinute, arrivalHour, arrivalMinute;
    char separator;

    cout << "Digite o horário de partida (HH:mm): ";
    cin >> departureHour >> separator >> departureMinute;
    cout << "Digite o horário de chegada (HH:mm): ";
    cin >> arrivalHour >> separator >> arrivalMinute;

    int spentHours, spentMinutes, totalSpentMinutes;
    totalSpentMinutes = (arrivalHour * MINPERHOUR + arrivalMinute) - (departureHour * MINPERHOUR + departureMinute);
    spentHours = totalSpentMinutes / MINPERHOUR;
    spentMinutes = totalSpentMinutes % MINPERHOUR;

    cout << "O tempo total de viagem foi " << spentHours << " horas e " << spentMinutes << " min.\n";

    return 0;
}

