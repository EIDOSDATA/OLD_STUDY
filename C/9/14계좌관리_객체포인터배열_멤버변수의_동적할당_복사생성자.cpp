#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define SI 15
#define CN 20
#define EN 10

class Account
{
    char *accid;       // 계좌번호
    char *name;        // 고객명
    long long balance; // 잔액
    int inx = 0;

public:
    Account(char *accid, char *name, long long money)
    {
        this->accid = new char[strlen(accid) + 1];
        strcpy(this->accid, accid);

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->balance = money;
        cout << "Creator!!" << endl;
    }
    Account(const Account &r)
    {
        this->accid = new char[strlen(r.accid) + 1];
        strcpy(this->accid, r.accid);

        this->name = new char[strlen(r.name) + 1];
        strcpy(this->name, r.name);
        this->balance = r.balance;
        cout << "Creator!!" << endl;
    }
    ~Account()
    {
        delete[] accid;
        delete[] name;
        cout << "Eraser!!" << endl;
    }
    void print_menu();
    void MakingAccount();
    void Deposit();
    void Withdrawal();
    void Account_inquiry();
    void All_Account_inquiry();
    void addMoney(long long money)
    {
        balance += money;
    }
    void subMoney(long long money)
    {
        balance -= money;
    }
    void setData(char *_accid, char *_name, long long money)
    {
        strcpy(accid, _accid);
        strcpy(name, _name);
        balance = money;
    }
    void disp()
    {
        cout << accid << "\t\t" << ends;
        cout << name << "\t\t\t" << ends;
        cout << balance << endl;
    }
};
static Account *p;

int main()
{
    int process_selectl;
    int i = 0;
    while (1)
    {
        p->print_menu();
        cout << "input process number :\t" << ends;
        cin >> process_selectl;
        cout << "-------------------------" << endl;

        switch (process_selectl)
        {
        case 1:
            p->MakingAccount();
            break;
        case 2:
            p->Deposit();
            break;
        case 3:
            p->Withdrawal();
            break;
        case 4:
            p->Account_inquiry();
            break;
        case 5:
            p->All_Account_inquiry();
            break;
        case 6:
            cout << "PROGRAME EXIT" << endl;
            exit(0);
            break;
        default:
            cout << "PROGRAME EXIT" << endl;
            exit(0);
            break;
        }
    }
    return 0;
}
void Account::All_Account_inquiry()
{
    cout << "#5 All Account inquiry" << endl;
    if (inx == 0)
    {
        cout << "NO Account Inquiry" << endl;
        return;
    }
    cout << "AccID\t\tUser Name\t\tBalance" << endl;
    for (int i = 0; i < inx; i++)
    {
        p[i].disp();
    }
}

void Account::Account_inquiry()
{
    char inputdata[SI];
    cout << "#4 Account inquiry" << endl;
    if (inx == 0)
    {
        cout << "NO Account Inquiry" << endl;
        return;
    }
    cout << "Input Serching Account inquiry :\t" << ends;
    fflush(stdin);
    cin.getline(inputdata, SI);

    for (int i = 0; i < inx; i++)
    {
        if (strcmp(p[i].accid, inputdata) == 0)
        {
            cout << "Find Complete" << endl;
            cout << "AccID\t\tUser Name\t\tBalance" << endl;
            p[i].disp();
        }
        else
        {
            cout << "Can't find Accid" << endl;
        }
    }
}

void Account::Withdrawal()
{
    char inputaccid[SI];
    long long money = 0;
    int account_f = 0, sub_f = 0; // find account
    cout << "#3 Withdrawal" << endl;
    if (inx == 0)
    {
        cout << "NO Account Inquiry" << endl;
        return;
    }
    while (1)
    {
        cout << "Enter Account Number : \t" << ends;
        fflush(stdin);
        cin.getline(inputaccid, SI);
        for (int i = 0; i < inx; i++)
        {
            if (strcmp(p[i].accid, inputaccid) == 0)
            {
                account_f = 1;
                break;
            }
        }
        if (account_f == 1)
        {
            break;
        }
        else if (account_f == 0)
        {
            cout << "No Matched...Retry Again" << endl;
        }
    }
    if (account_f == 1)
    {
        while (1)
        {
            cout << "Input Withdrawal value :\t" << ends;
            fflush(stdin);
            cin >> money;
            for (int i = 0; i < inx; i++)
            {
                if (strcmp(p[i].accid, inputaccid) == 0)
                {
                    if (p[i].balance >= money)
                    {
                        p[i].subMoney(money);
                        sub_f = 1;
                    }
                    else
                    {
                        cout << "===========================" << endl;
                        cout << "Not Enough Money. Retry Again" << endl;
                        cout << "===========================" << endl;
                    }
                }
                break;
            }

            if (sub_f == 1)
            {
                break;
            }
        }
    }

    for (int i = 0; i < inx; i++)
    {
        if (strcmp(p[i].accid, inputaccid) == 0)
        {
            cout << "AccID\t\tUser Name\t\tBalance" << endl;
            p[i].disp();
        }
    }
}

void Account::Deposit()
{
    char inputaccid[SI];
    long long money = 0;
    int account_f = 0; // find account
    cout << "#2 Deposit" << endl;
    if (inx == 0)
    {
        cout << "NO Account Inquiry" << endl;
        return;
    }
    while (1)
    {
        cout << "Enter Account Number : \t" << ends;
        fflush(stdin);
        cin.getline(inputaccid, SI);
        for (int i = 0; i < inx; i++)
        {
            if (strcmp(p[i].accid, inputaccid) == 0)
            {
                account_f = 1;
                break;
            }
        }
        if (account_f == 1)
        {
            break;
        }
        else if (account_f == 0)
        {
            cout << "No Matched...Retry Again" << endl;
        }
    }
    if (account_f == 1)
    {
        cout << "Input Deposit value :\t" << ends;
        fflush(stdin);
        cin >> money;
        for (int i = 0; i < inx; i++)
        {
            if (strcmp(p[i].accid, inputaccid) == 0)
            {
                p[i].addMoney(money);
            }
        }
    }

    for (int i = 0; i < inx; i++)
    {
        if (strcmp(p[i].accid, inputaccid) == 0)
        {
            cout << "AccID\t\tUser Name\t\tBalance" << endl;
            p[i].disp();
        }
    }
}

void Account::MakingAccount()
{
    char inputdata[SI];
    int flag = 0;
    long long money;
    cout << "#1 Making an Bank Account" << endl;

    do
    {
        flag = 0;
        cout << "Enter Account Number : \t" << ends;
        fflush(stdin);
        cin.getline(inputdata, SI);
        for (int i = 0; i <= inx; i++)
        {
            if (strcmp(p[i].accid, inputdata) == 0)
            {
                cout << "ERROR!! There is a duplicate ID." << endl;
                flag = 1;
                break;
            }
        }
    } while (flag);

    strcpy(p[inx].accid, inputdata);

    cout << "Enter User Name : \t" << ends;
    fflush(stdin);
    cin.getline(p[inx].name, CN);

    cout << "Offerings Amount :\t" << ends;
    fflush(stdin);
    //cin >> money;
    cin >> p[inx].balance;
    //p = new Account(inputdata, p[inx].name, money);
    inx++;
}

void Account::print_menu()
{
    cout << "----------MENU----------" << endl;
    cout << "1. Making an Bank Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. Account inquiry" << endl;
    cout << "5. All Account inquiry" << endl;
    cout << "6. End of work" << endl;
}