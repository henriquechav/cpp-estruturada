#include <iostream>
using namespace std;

enum dfct {VeryEasy=1, Easy, Medium, Hard, VeryHard};

struct timetable
{
    unsigned hour;
    unsigned minute;
};

struct question
{
    dfct difficulty;
    timetable start;
    timetable end;
};

struct average
{
    float difficulty;
    float time;
};

struct participant
{
    char name[20];
    question *questions;
};

void showDivider(char, unsigned);
void showQuestions(question[], unsigned);
void showParticipants(participant[], unsigned, unsigned);
average calculateAverage(question[], int, int, int);

unsigned operator-(timetable, timetable);
istream& operator>>(istream&, timetable&);
ostream& operator<<(ostream&, timetable&);
istream& operator>>(istream&, dfct&);
