#include <iostream>
using namespace std;

int main()
{
    int weight, runhours, runminutes, bikehours, bikeminutes, swimhours, swimminutes;
    char separator;
    float wastedenergy;
    
    cout << "Digite seu peso em quilos: ";
    cin >> weight;

    cout << "Digite seu tempo de corrida: ";
    cin >> runhours >> separator >> runminutes >> separator;

    cout << "Digite seu tempo de ciclismo: ";
    cin >> bikehours >> separator >> bikeminutes >> separator;
    
    cout << "Digite seu tempo de natação: ";
    cin >> swimhours >> separator >> swimminutes >> separator;

    wastedenergy = 7.0 * weight * (runhours + runminutes / 60); // wasted energy running
    wastedenergy += 7.0 * weight * (bikehours + bikeminutes / 60); // biking
    wastedenergy += 8.0 * weight * (swimhours + swimminutes / 60); // swimming

    cout << "Você gastou um total de " << wastedenergy << " calorias.\n";

    return 0;
}
