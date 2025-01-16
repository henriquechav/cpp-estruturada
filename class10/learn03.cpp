#include <iostream>
using namespace std;

double multsub(double []);

int main()
{
    double vec[3];
    cout << "Digite três doubles: ";
    cin >> vec[0] >> vec[1] >> vec[2];

    cout << "A saída da função: " << multsub(vec) << endl;

    return 0;
}

double multsub(double vt[])
{
    return vt[0] * (vt[2] - vt[1]); 
}
