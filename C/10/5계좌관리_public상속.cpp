//17계좌관리_복사생성자_const
#include <iostream>
#include <iomanip>
#include <cstring>
#define SI 15
#define CN 20
#define EN 10
using namespace std;

class Bank
{
    char *accid;       //계좌번호
    char *name;        //고객명
    long long balance; //잔액
public:
    long long getBalance() const { return balance; }
    void subMoney(long long money) { balance -= money; }
    void addMoney(long long money) { balance += money; }

    const char *getAccid() const { return accid; }
    ~Bank()
    {
        delete[] accid;
        delete[] name;
        cout << "Eraser!!!\n";
    }
    Bank(const char *accid = "no_accid", const char *name = "no_name",
            long long money = 0)
    {
        this->accid = new char[strlen(accid) + 1]; //공간확보
        strcpy(this->accid, accid);                //할당
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        balance = money;
        cout<<"ROOT CREATOR!!" << endl;
    }
    Bank(const Account &r)
    {
        accid = new char[strlen(r.accid) + 1]; //공간확보
        strcpy(accid, r.accid);                //할당
        name = new char[strlen(r.name) + 1];
        strcpy(name, r.name);
        balance = r.balance;
        cout << "COPY CREATOR!!!\n";
    }
};

class Account : public Bank
{
    char *accid;       //계좌번호
    char *name;        //고객명
    long long balance; //잔액
public:
    long long getBalance() const { return balance; }
    void subMoney(long long money) { balance -= money; }
    void addMoney(long long money) { balance += money; }
    const char *getAccid() const { return accid; }
    ~Account()
    {
        delete[] accid;
        delete[] name;
        cout << "Eraser!!!" << endl;
    }
    Account(const char *accid = "no_accid", const char *name = "no_name",
            long long money = 0)
    {
        this->accid = new char[strlen(accid) + 1]; //공간확보
        strcpy(this->accid, accid);                //할당
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        balance = money;
        //cout<<"생성자!!!\n";
    }
    Account(const Account &r)
    {
        accid = new char[strlen(r.accid) + 1]; //공간확보
        strcpy(accid, r.accid);                //할당
        name = new char[strlen(r.name) + 1];
        strcpy(name, r.name);
        balance = r.balance;
        cout << "COPY CREATOR!!!\n";
    }
    void disp() const
    {
        cout << "ACCID : " << accid << "\tNAME : " << setw(12) << left << name << "\tMONEY : " << setw(13) << right << balance << "원\n";
    }
};
static Account *p[EN]; //전역의 객체포인터배열 선언
static int inx = 0;    //전역의 첨자 선언
void menu();
void makeAccid();
void allInq();
void oneInq();
void ipKum();
void chulKum();
void Del();
int main()
{
    int jNo;
    cout << "p byte size : " << sizeof(p) << endl; //8byte*10
    while (true)
    {
        menu();
        cout << "작업선택? ";
        cin >> jNo;
        switch (jNo)
        {
        case 1:
            makeAccid();
            break;
        case 2:
            ipKum();
            break;
        case 3:
            chulKum();
            break;
        case 4:
            oneInq();
            break;
        case 5:
            allInq();
            break;
        default:
            cout << "작업을 종료합니다.\n";
            Del();
            return 0;
        } //switch
    }     //while
    return 0;
}
void Del()
{
    for (int i = 0; i < inx; i++)
    {
        delete p[i]; //소멸자 호출
    }
}
void chulKum()
{
    cout << "#출금 작업입니다.\n";
    if (inx == 0)
    {
        cout << "\t개설계좌가 x....#출금 작업불가!!!\n";
        return; /// chulKum()의 호출위치로 복귀!!
    }
    char accid[SI];
    long long money;
    bool tw = false;
    while (true)
    {
        cout << "출금 계좌번호? ";
        fflush(stdin);
        gets(accid);
        if (tw == false)
        {
            cout << "     출금액? ";
            cin >> money;
        }
        int i;
        bool sw = false; //일치 계좌 찾기전 초기치
        for (i = 0; i < inx; i++)
        {
            if (strcmp(p[i]->getAccid(), accid) == 0)
            {
                sw = true;
                break;
            }
        } //for
        if (sw == false)
        {
            cout << "\t출금계좌x...다시 ";
            tw = true;
            continue; //while의 조건식으로 올라감
        }
        else
        { //출금계좌 존재
            if (p[i]->getBalance() == 0)
            {
                cout << "\t출금불가!! 잔액 : " << p[i]->getBalance() << "원\n";
                return;
            }
            while (p[i]->getBalance() < money) //잔액<출금액
            {
                cout << "\t잔액부족...출금불가!! 출금가능잔액 : " << p[i]->getBalance();
                cout << " 다시 출금액? ";
                cin >> money;
            } //while
            p[i]->subMoney(money);
            cout << "출금후 잔액 : " << p[i]->getBalance() << "원\n";
            break; //while을 탈출!!
        }
    } //while
    cout << "#출금 작업완료.\n";
}
void ipKum()
{
    cout << "#입금 작업입니다.\n";
    if (inx == 0)
    {
        cout << "\t개설계좌가 x....#입금 작업불가!!!\n";
        return; /// ipKum()의 호출위치로 복귀!!
    }
    char accid[SI];
    long long money;
    bool tw = false;
    while (true)
    {
        cout << "입금 계좌번호? ";
        fflush(stdin);
        gets(accid);
        if (tw == false)
        {
            cout << "     입금액? ";
            cin >> money;
        }
        int i;
        bool sw = false; //일치 계좌 찾기전 초기치
        for (i = 0; i < inx; i++)
        {
            if (strcmp(p[i]->getAccid(), accid) == 0)
            {
                sw = true;
                break;
            }
        } //for
        if (sw == false)
        {
            cout << "\t입금계좌x...다시 ";
            tw = true;
            continue; //while의 조건식으로 올라감
        }
        else
        { //입금계좌 존재
            p[i]->addMoney(money);
            cout << "입금후 잔액 : " << p[i]->getBalance() << "원\n";
            break; //while을 탈출!!
        }
    } //while
    cout << "#입금 작업완료.\n";
}
void oneInq()
{
    cout << "#계좌조회 작업입니다.\n";
    if (inx == 0)
    {
        cout << "\t개설계좌가 x....#계좌조회 작업불가!!!\n";
        return; /// oneInq()의 호출위치로 복귀!!
    }
    char accid[SI];
    cout << "조회 계좌번호? ";
    fflush(stdin);
    gets(accid);
    int i;
    bool sw = false; //찾기전 초기치 설정
    for (i = 0; i < inx; i++)
    {
        if (strcmp(p[i]->getAccid(), accid) == 0)
        {
            sw = true;
            break;
        }
    }
    if (sw == false)
    {
        cout << "\t조회계좌는 존재하지 x.\n";
        return;
    }
    else
        p[i]->disp();
    cout << "#계좌조회 작업완료.\n";
}
void allInq()
{
    cout << "#전체 계좌조회 작업입니다.\n";
    if (inx == 0)
    {
        cout << "\t개설계좌가 x....#전체 계좌조회 작업불가!!!\n";
        return; /// allInq()의 호출위치로 복귀!!
    }
    for (int i = 0; i < inx; i++)
    {
        p[i]->disp();
    }
    cout << "#전체 계좌조회 작업완료.\n";
}
void makeAccid()
{
    cout << "#1 Making an Bank Account" << endl;
    char accid[SI], name[CN];
    long long money;
    bool sw;
    do
    {
        cout << "Enter Account Number : \t" << ends;
        fflush(stdin);
        gets(accid);
        sw = false; //중복계좌 체크전 초기치
        for (int i = 0; i < inx; i++)
        {
            if (strcmp(p[i]->getAccid(), accid) == 0)
            {
                cout << "ERROR!! There is a duplicate ID." << endl;
                sw = true;
                break;
            }
        } //for
    } while (sw);
    cout << "Enter User Name : \t" << ends;
    fflush(stdin);
    gets(name);
    cout << "Offerings Amount :\t" << ends;
    cin >> money;
    p[inx] = new Account(accid, name, money);
    //cout<<"inx : "<<inx<<endl;//p[0],p[1],p[2]
    inx++; //3
    //p[0].disp();
    cout << "#Bank Account Creation Complete.\n";
}
void menu()
{
    cout << "----------MENU----------" << endl;
    cout << "1. Making an Bank Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. Account inquiry" << endl;
    cout << "5. All Account inquiry" << endl;
    cout << "6. End of work" << endl << endl;
}
