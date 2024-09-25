#include <iostream>
using namespace std;

int main(void)
{
    int years, cigarettes;
    float avgprice;

    cout << "How many years do you smoke? ";
    cin >> years;

    cout << "How many cigarettes do you smoke a day? ";
    cin >> cigarettes;

    cout << "Which is the average price of a pack of cigarettes? ";
    cin >> avgprice;

    // total of money spent = unit cigarette price * total of cigarettes smoked 
    float total = (avgprice / 20) * (years * 365 * cigarettes);

    cout << "You have spent $" << total << " on cigarettes so far.\n";

    return 0;
}
