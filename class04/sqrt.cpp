// using the sqrt() function
#include <iostream>
#include <cmath> 
using namespace std;

// the functions' prototypes usually are written immediately above main()
// however, sqrt()'s prototype is in cmath header file.
int main()
{
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;

    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0;
}
