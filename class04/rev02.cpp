// review exercise 02 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// time() return the current time
// if it receives NULL, return it in seconds
// conted since january 1th 1970, by convention
int main()
{
    srand(time(NULL));

    cout << "Gerando número pseudoaleatório:\n";
    int num = rand();
    cout << num << endl;

    if (num > 16834) {
        cout << "GRANDE\n";
    } else {
        cout << "PEQUENO\n";
    }

    return 0;
}
