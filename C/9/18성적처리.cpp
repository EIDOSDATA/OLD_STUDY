#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#define SI 15
#define CN 20
#define EN 10
using namespace std;

void menu();
void baseInput();
void baseOutput();

int inx = 0;
class Score
{
    int hno;
    char *name;
    int kor;
    int eng;
    int total;
    float avg;
    char grade;
    int rank;

public:
    ~Score()
    {
        cout << "Eraser" << endl;
    }
    Score(int hno, char *name, int kor, int eng)
    {
        this->hno = hno;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->kor = kor;
        this->eng = eng;
    }
    Score(const Score &r)
    {
        this->hno = r.hno;
        this->name = new char[strlen(r.name) + 1];
        strcpy(this->name, r.name);
        this->kor = r.kor;
        this->eng = r.eng;
    }
    void disp()
    {
        cout << hno << "\t" << name << "\t" << kor << "\t" << eng << endl;
    }
};
Score *p[CN];

int main()
{
    int process;
    while (1)
    {
        menu();
        cout << "Select Process :" << ends;        
        cin >> process;
        cout << "------------------------" << endl;
        switch (process)
        {
        case 1:
            baseInput();
            break;
        case 2:
            baseOutput();
            break;
        case 3:
            //scoreReport();
            break;
        case 4:
            //hnoInq();
            break;
        case 5:
            //sort_scoreReport();
            break;
        case 6:
            cout << "EXIT" << endl;
            exit(0);
            break;
        default:
            cout << "EXIT" << endl;
            exit(0);
            break;
        }
    }
    return 0;
}

void baseOutput()
{    
    cout << "#2 Data Output Process" << endl;
    if (inx == 0)
        return;

    cout << "Number\tName\tKor\tEng" << endl;
    for (int i = 0; i < inx; i++)
    {
        p[i]->disp();
    }
    cout << "Data Output Process Complete" << endl;    
}

void baseInput()
{
    cout << "#1 Data Input Process" << endl;
    int hno, kor, eng;
    char name[SI];

    cout << "input number : " << ends;
    fflush(stdin);
    cin >> hno;

    cout << "input name : " << ends;
    fflush(stdin);
    cin.getline(name, SI);

    cout << "input kor, endg score : " << ends;
    fflush(stdin);
    cin >> kor >> eng;
    p[inx] = new Score(hno, name, kor, eng);
    p[inx]->disp();
    cout << "Data Input Process Complete" << endl;
    inx++;
}

void menu()
{
    cout << "----------MENU----------" << endl;    
    cout << "1. Input" << endl;
    cout << "2. OUTPUT" << endl;
    cout << "3. Score Report Card Printing" << endl;
    cout << "4. Query by Number" << endl;
    cout << "5. Sort by Score Report Card" << endl;
    cout << "6. EXIT" << endl;
    cout << "------------------------" << endl;
}
