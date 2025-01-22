#include <iostream>
using namespace std;

struct word
{
    char portuguese[20];
    char english[20];
    char spanish[20];
};

ostream& operator<<(ostream&, word&);

int main()
{
    word dictionary[10] = {
        {"lápis", "pencil", "lápiz"},
        {"carro", "car", "coche"}
    };

    cout << "Entre com uma palavra em português: ";
    cin >> dictionary[2].portuguese;
    cout << "Sua tradução para o inglês: ";
    cin >> dictionary[2].english;
    cout << "Sua tradução para o espanhol: ";
    cin >> dictionary[2].spanish;
    cout << endl;

    cout << "Dicionário de palavras em português, inglês e espanhol, respectivamente:\n";
    cout << "\t1. " << dictionary[0] << endl;
    cout << "\t2. " << dictionary[1] << endl;
    cout << "\t3. " << dictionary[2] << endl;
    cout << endl;

    return 0;
}

ostream& operator<<(ostream& os, word &w)
{
    os << w.portuguese << "; " << w.english << "; " << w.spanish << ".";
    return os;
}
