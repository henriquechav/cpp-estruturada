#include <iostream>
#include <iomanip>
#include "contest.h"
using namespace std;

// Mostra as várias questões de um participante.
void showQuestions(question questions[], unsigned length)
{
    for (char i = 0, ch = 'A'; i < length; ch++, i++)
    {
        // Calculando tempo gasto na questão.
        unsigned elapsed = questions[i].end - questions[i].start;

        // Exibindo informações.
        cout << '\t' << ch << " (" << questions[i].difficulty << ") "
            << questions[i].start << " às "
            << questions[i].end << " ("
            << elapsed << " min)\n";
    }
}

// Mostra os dados de cada participante para uma questão dado seu índice.
void showParticipants(participant p[], unsigned participantsAmount, unsigned index)
{
    for (int i = 0; i < participantsAmount; i++)
    {
        unsigned elapsed = p[i].questions[index].end - p[i].questions[index].start;

        cout << '\t' << p[i].name << " (" << p[i].questions[index].difficulty << ") "
            << p[i].questions[index].start << " às " << p[i].questions[index].end
            << " (" << elapsed << " min)\n";
    }
}

// Calcula a média das dificuldades e tempo das questões dado um índice inicial e um passo.
average calculateAverage(question questions[], int length, int index, int step)
{
    average avg;
    int counter = 0, difficulties = 0, minutes = 0;
    for (int i = index; i < length; i+=step)
    {
        difficulties += int(questions[i].difficulty);
        minutes += questions[i].end - questions[i].start;
        counter++;
    }
    avg.difficulty = float(difficulties) / counter;
    avg.time = float(minutes) / counter;
    return avg;
}

// Exibe vários caracteres para dividir as seções do programa.
void showDivider(char ch, unsigned length)
{
    for (int i = 0; i < length; i++)
        cout << ch;
    cout << endl;
}

// Lê um horário do usuário.
istream& operator>>(istream& is, timetable &t)
{
    is >> t.hour;
    is.ignore();
    is >> t.minute;
    return is;
}

// Exibe um horário formatado.
ostream& operator<<(ostream& os, timetable &t)
{
    os << setfill('0') << setw(2) << t.hour << ':' 
        << setfill('0') << setw(2) << t.minute;
    return os;
}

// Conta intervalo entre horários em minutos.
unsigned operator-(timetable end, timetable start)
{
    return (end.hour * 60 + end.minute) - (start.hour * 60 + start.minute);
}

// Lê do usuário um tipo dfct (para dificuldades)
istream& operator>>(istream& is, dfct &d)
{
    int temp;
    is >> temp;
    d = dfct(temp);
    return is;
}
