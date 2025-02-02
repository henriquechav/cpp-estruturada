#include <iostream>
using namespace std;

enum discipline_status {Approved, Locked, Failed};

struct student
{
    bool isName;
    union {
        char name[30];
        unsigned registration;
    } id;
    unsigned code;
    discipline_status status;
};

void showStudent(student*);

int main()
{
    cout << "Digite a quantidade de alunos: ";
    unsigned amount;
    cin >> amount;

    student *students = new student [amount];

    // lendo dados do primeiro aluno
    cout << "\nDADOS DO PRIMEIRO ALUNO\n";
    cout << "Digite 0 para registrar a matrícula, ou digite 1 para registrar o nome: ";
    cin >> students[0].isName;
    if (students[0].isName) {
        cout << "Digite o nome: ";
        cin.ignore();
        cin.getline(students[0].id.name, 30);
    } else {
        cout << "Digite a matrícula: ";
        cin >> students[0].id.registration;
    }
    cout << "Digite o código da discilina: ";
    cin >> students[0].code;
    cout << "Digite o status da disciplina (0 para Aprovado; 1 para Trancado; 2 para Reprovado): ";
    unsigned temp;
    cin >> temp;
    students[0].status = discipline_status(temp);
    
    cout << endl;
    showStudent(&students[0]);
    cout << endl;

    delete students;

    return 0;
}

void showStudent(student *ps)
{
    cout << "O aluno ";
    if (ps->isName) {
        cout << ps->id.name;
    } else {
        cout << "de matrícula " << ps->id.registration;
    }
    cout << " está registrado na disciplina de código " << ps->code
         << " na situação ";
    if (ps->status == Approved)
        cout << "Aprovado.";
    else if (ps->status == Locked)
        cout << "Trancado.";
    else 
        cout << "Reprovado.";
}
