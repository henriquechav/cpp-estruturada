#include <iostream>
#include "contest.h"
using namespace std;

int main()
{
    // Colhendo dados iniciais e criando vetores.
    showDivider('*', 35);
    cout << "Concurso de Programação\n\n";
    unsigned participantsAmount, questionsAmount;
    cout << "Qual o número de participantes? ";
    cin >> participantsAmount;
    cout << "Qual o número de questões? ";
    cin >> questionsAmount;
    cout << endl;
    showDivider('*', 35);

    unsigned totalQuestionsAmount = questionsAmount * participantsAmount;
    question *questions = new question[ totalQuestionsAmount ];
    participant *participants = new participant[ participantsAmount ];

    // Colhendo dados do usuário.
    for (int i = 0; i < participantsAmount; i++)
    {
        // Cada participante aponta para o início das suas questões.
        participants[i].questions = &questions[ i * questionsAmount ];

        showDivider('-', 13);
        cout << "Participante: ";
        cin >> participants[i].name;
        showDivider('-', 13);

        for (char j = 0, ch = 'A'; j < questionsAmount; ch++, j++)
        { 
            cout << "Questão " << ch << endl;
            cout << "\tDificuldade: ";
            cin >> participants[i].questions[j].difficulty;
            cout << "\tInício: ";
            cin >> participants[i].questions[j].start;
            cout << "\tFim: ";
            cin >> participants[i].questions[j].end;
        }

        showDivider('-', 13);
        cout << endl;
    }

    // Mostra o resumo por cada participante.
    showDivider('*', 35);
    showDivider('-', 23);
    cout << "Resumo por Participante\n";
    showDivider('-', 23);

    for (int i = 0; i < participantsAmount; i++)
    {
        cout << participants[i].name << ":\n";
        showQuestions(participants[i].questions, questionsAmount);
    }

    showDivider('-', 23);
    cout << endl;

    // Mostra o resumo por cada questão.
    showDivider('-', 18);
    cout << "Resumo por Questão\n";
    showDivider('-', 18);

    for (char j = 0, ch = 'A'; j < questionsAmount; ch++, j++)
    {
        cout << "Questão " << ch << ":\n";
        showParticipants(participants, participantsAmount, j);
    }

    showDivider('-', 18);
    cout << endl;

    // Mostra as estatísticas finais (para cada questão e geral)
    showDivider('-', 12);
    cout << "Estatísticas\n";
    showDivider('-', 12);

    cout << fixed;
    cout.precision(2);
    
    average avg;
    for (char j = 0, ch = 'A'; j < questionsAmount; ch++, j++)
    {
        avg = calculateAverage(questions, totalQuestionsAmount, j, questionsAmount);
        cout << "Questão " << ch << ": Dificuldade (" << avg.difficulty << ") - "
            << "Tempo (" << avg.time << " minutos)\n";
    }

    avg = calculateAverage(questions, totalQuestionsAmount, 0, 1);
    cout << "Concurso:  Dificuldade (" << avg.difficulty << ") - "
       << "Tempo (" << avg.time << " minutos)\n";
    
    cout << endl;
    showDivider('*', 35);

    return 0;
}
