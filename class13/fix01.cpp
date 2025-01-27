#include <iostream>
#include <cstring>
using namespace std;

// enumeração para indicar o tipo de dado que representa a cor do carro
enum class color_infotype { Number=1, Name, Code };

struct car
{
    char model[20];
    int fabricationYear;
    float price;
    color_infotype colorType;
    union {
        int number;
        char name[15];
        char code[5];
    } color;
};

istream& operator>>(istream&, car&);
istream& operator>>(istream&, color_infotype&);
ostream& operator<<(ostream&, car&);

int main()
{
    car cars[10] = {
        {"Vectra", 2009, 58'000.00, color_infotype::Name, 0},
        {"Polo", 2008, 45'000.00, color_infotype::Name, 0}
    };
    strcpy(cars[0].color.name, "Azul");
    strcpy(cars[1].color.name, "Preto");

    cout << "Entre com os dados de um carro:\n";
    cin >> cars[2];
    cout << endl;

    cout << "Os carros da lista são:\n";
    cout << "\t1. " << cars[0] << endl;
    cout << "\t2. " << cars[1] << endl;
    cout << "\t3. " << cars[2] << endl;

    cout << endl;
    return 0;
}

istream& operator>>(istream& is, car &c)
{
    cout << "Modelo: ";
    is >> c.model;
    cout << "Ano de fabricação: ";
    is >> c.fabricationYear;
    cout << "Preço: R$";
    is >> c.price;

    cout << "Tipo de dado da cor\n"
            "[1] Número\n"
            "[2] Nome\n"
            "[3] Código\n"
            "Digite: ";
    is >> c.colorType;

    // lendo o tipo certo de cor
    cout << "Cor: ";
    if (c.colorType == color_infotype::Number)
        is >> c.color.number;
    else if (c.colorType == color_infotype::Name)
        is >> c.color.name;
    else 
        is >> c.color.code;
    
    return is;
}

istream& operator>>(istream& is, color_infotype &cit)
{
    int temp;
    is >> temp;
    cit = color_infotype(temp);
    return is;
}

ostream& operator<<(ostream& os, car &c)
{
    os << fixed;
    os.precision(2);
    os << "Modelo " << c.model << " fabricado em " << c.fabricationYear
       << ", custando R$" << c.price << ", na cor ";
    os << scientific;

    // exibindo o tipo certo de cor
    if (c.colorType == color_infotype::Name)
        os << c.color.name << ".";
    else if (c.colorType == color_infotype::Number)
        os << "de número " << c.color.number << ".";
    else 
        os << "de código " << c.color.code << ".";

    return os;
}
