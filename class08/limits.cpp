#include <iostream>
#include <cfloat>
using namespace std;

int main()
{
    cout << "Total de bits\n";
    cout << "float:       " << sizeof (float) * 8 << endl;
    cout << "double:      " << sizeof (double) * 8 << endl;
    cout << "long double: " << sizeof (long double) * 8 << endl;

    cout << "\nNúmero de dígitos significativos\n";
    cout << "float:       " << FLT_DIG << endl;
    cout << "double:      " << DBL_DIG << endl;
    cout << "long double: " << LDBL_DIG << endl;

    cout << "\nValores máximos do expoente\n";
    cout << "float:       " << FLT_MAX_10_EXP << endl;
    cout << "double:      " << DBL_MAX_10_EXP << endl;
    cout << "long double: " << LDBL_MAX_10_EXP << endl;

    cout << "\nNúmero de bits na mantissa\n";
    cout << "float:       " << FLT_MANT_DIG << endl;
    cout << "double:      " << DBL_MANT_DIG << endl;
    cout << "long double: " << LDBL_MANT_DIG << endl;

    return 0;
}
