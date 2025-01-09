#include <iostream>
using namespace std;

int main()
{
    bool horn = false;

    cout << "Buzinar? ";
    cin >> horn;

    if (horn == true)
        cout << "Buzina\a\a\a\a\a\n";
    else
        cout << "Silêncio" << endl;
    
    return 0;
}
