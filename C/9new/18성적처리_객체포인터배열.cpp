/**18성적처리_객체포인터배열
*/
#include <iostream>
#include <iomanip>
#include <cstring>
#define SI 20
#define CN 10
using namespace std;
class Sungjuk
{
    int hno;
    char *name;
    int kor;
    int eng;
    int tot;
    float ave;
    char grade;
    int rn;

public:
    ~Sungjuk() { delete[] name; }
    Sungjuk(int hno = 0, const char *name = "no_name",
            int kor = 0, int eng = 0)
    {
        this->hno = hno;
        this->name = new char[strlen(name) + 1]; //heap에 공간확보
        strcpy(this->name, name);                //할당
        this->kor = kor;
        this->eng = eng;
    }
    Sungjuk(const Sungjuk &r)
    {
        this->hno = r.hno;
        this->name = new char[strlen(r.name) + 1]; //heap에 공간확보
        strcpy(this->name, r.name);                //할당
        this->kor = r.kor;
        this->eng = r.eng;
    }
    void disp()
    {
        cout << setw(3) << hno << "\t" << setw(12) << left << name << "\t" << setw(3) << right << kor << "\t" << setw(3) << eng << endl;
    }
    void disp2()
    {
        cout << setw(3) << hno << "\t" << setw(12) << left << name << "\t" << setw(3) << right << kor << "\t" << setw(3) << eng << endl;
    }
    int getTot()
    {
        return tot;
    }
    double calc()
    {
        ave = (kor + eng) / 2.0f;
        return ave;
    }
};
static Sungjuk *p[CN];
static int inx = 0;
void menu();
void baseInput();
void baseOutput();
int main()
{
    int Jno;
    while (true)
    {
        menu();
        cout << "작업선택? ";
        cin >> Jno;
        switch (Jno)
        {
        case 1:
            baseInput();
            break;
        case 2:
            baseOutput();
            break;
            //case 3:scoreReport();break;
            // case 4:hnoInq();break;
            //case 5:sort_scoreReport();break;
        default:
            cout << "작업을 종료합니다.\n";
            return 0;
        } //switch
    }     //while
    return 0;
}
void Rank()
{
    int soon;
    for (int i = 0; i <= inx; i++)
    {
        soon = 1;
        for (int j = 0; j < inx; j++)
        {
            if (p[i]->getTot() > p[j]->getTot())
            {
            }
        }
    }
}

void baseOutput()
{
    cout << "#기본data출력 작업입니다.\n";
    if (inx == 0)
    {
        cout << "\t생성객체 X ... #기본data출력 작업불가!!\n";
        return; //복귀
    }
    cout << "번호\t이름\t\t국어\t영어\n";
    for (int i = 0; i < inx; i++)
    {
        p[i]->disp();
    }
    cout << "#기본data출력 작업완료.\n";
}
void baseInput()
{
    cout << "#기본data입력 작업입니다.\n";
    int hno, kor, eng;
    char name[SI];
    cout << "번호? ";
    cin >> hno;
    cout << "이름? ";
    fflush(stdin);
    gets(name);
    cout << "국어,영어?? ";
    cin >> kor >> eng;
    p[inx] = new Sungjuk(hno, name, kor, eng);
    p[inx]->calc();
    Rank();
    //p[inx]->disp();p[0],p[1],p[2]
    inx++; //3
    cout << "#기본data입력 작업완료.\n";
}
void menu()
{
    cout << "\n -- 메뉴 --\n";
    cout << "1. 기본data입력\n";
    cout << "2. 기본data출력\n";
    cout << "3. 성적표 출력\n";
    cout << "4. 번호로 조회\n";
    cout << "5. 성적표(등수순) 출력\n";
    cout << "6. 작업종료\n\n";
}
