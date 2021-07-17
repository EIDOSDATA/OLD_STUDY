//1계좌관리_객체배열
#include<iostream>
#include<iomanip>
#include<cstring>
#define SI 15
#define CN 20
#define EN 10
using namespace std;
class Account{
    char accid[SI];//계좌번호
    char name[CN];//고객명
    long long balance;//잔액
public:
    long long getBalance(){ return balance;   }
    void subMoney(long long money){ balance-=money; }
    void addMoney(long long money){ balance+=money;}
    char* getAccid() { return accid;      }
    void setData(char* _accid,char* _name,long long money){
     strcpy(accid,_accid);
     strcpy(name,_name);
     balance=money;
    }
    void disp(){
      cout<<"계좌번호 : "<<accid<<
      "\t고객명 : "<<setw(12)<<left<<name<<
      "\t잔액 : "<<setw(13)<<right<<balance<<"원\n";
    }
    Account(){ cout<<"생성자!!\n";     }
    ~Account(){ cout<<"소멸자!!\n";     }
};
static Account p[EN];//전역의 객체배열 선언
static int inx=0;//전역의 첨자 선언
void menu();
void makeAccid();
void allInq();
void oneInq();
void ipKum();
void chulKum();
int main()
{
    int jNo;
    //cout<<"p의 byte수 : "<<sizeof(p)<<endl;//480byte
    while(true){
        menu();
        cout<<"작업선택? ";cin>>jNo;
        switch(jNo){
            case 1:makeAccid();break;
            case 2:ipKum();break;
            case 3:chulKum();break;
            case 4:oneInq();break;
            case 5:allInq();break;
            default:cout<<"작업을 종료합니다.\n";
                       return 0;
        }//switch
    }//while
    return 0;
}
void chulKum(){
cout<<"#출금 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 x....#출금 작업불가!!!\n";
        return;/// chulKum()의 호출위치로 복귀!!
    }
    char accid[SI];
    long long money;
    bool tw=false;
    while(true){
        cout<<"출금 계좌번호? ";fflush(stdin);gets(accid);
        if(tw==false){
            cout<<"     출금액? ";cin>>money;
        }
        int i;
        bool sw=false;//일치 계좌 찾기전 초기치
        for(i=0;i<inx;i++){
             if( strcmp(p[i].getAccid(),accid) == 0) {
                    sw=true;
                    break;
             }
        }//for
            if (sw==false){
            cout<<"\t출금계좌x...다시 ";
            tw=true;
            continue;//while의 조건식으로 올라감
            }
           else{//출금계좌 존재
                if( p[i].getBalance()==0 ){
        cout<<"\t출금불가!! 잔액 : "<<p[i].getBalance()<<"원\n";
                 return;
                }
                while(p[i].getBalance() < money) //잔액<출금액
                {
                    cout<<"\t잔액부족...출금불가!! 출금가능잔액 : "<<
                    p[i].getBalance();
                    cout<<" 다시 출금액? ";cin>>money;
                }//while
            p[i].subMoney(money);
            cout<<"출금후 잔액 : "<<p[i].getBalance()<<"원\n";
            break;//while을 탈출!!
           }
    }//while
    cout<<"#출금 작업완료.\n";
}
void ipKum(){
    cout<<"#입금 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 x....#입금 작업불가!!!\n";
        return;/// ipKum()의 호출위치로 복귀!!
    }
    char accid[SI];
    long long money;
    bool tw=false;
    while(true){
        cout<<"입금 계좌번호? ";fflush(stdin);gets(accid);
        if(tw==false){
            cout<<"     입금액? ";cin>>money;
        }
        int i;
        bool sw=false;//일치 계좌 찾기전 초기치
        for(i=0;i<inx;i++){
             if( strcmp(p[i].getAccid(),accid) == 0) {
                    sw=true;
                    break;
             }
        }//for
            if (sw==false){
            cout<<"\t입금계좌x...다시 ";
            tw=true;
            continue;//while의 조건식으로 올라감
            }
           else{//입금계좌 존재
            p[i].addMoney(money);
            cout<<"입금후 잔액 : "<<p[i].getBalance()<<"원\n";
            break;//while을 탈출!!
           }
    }//while
    cout<<"#입금 작업완료.\n";
}
void oneInq(){
    cout<<"#계좌조회 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 x....#계좌조회 작업불가!!!\n";
        return;/// oneInq()의 호출위치로 복귀!!
    }
    char accid[SI];
    cout<<"조회 계좌번호? ";fflush(stdin);gets(accid);
    int i;
    bool sw=false;//찾기전 초기치 설정
    for(i=0;i<inx;i++){
        if( strcmp(p[i].getAccid(),accid) == 0) {
                sw=true;break;
        }
    }
    if(sw==false){
        cout<<"\t조회계좌는 존재하지 x.\n";
        return;
    }
    else
         p[i].disp();
    cout<<"#계좌조회 작업완료.\n";
}
void allInq(){
    cout<<"#전체 계좌조회 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 x....#전체 계좌조회 작업불가!!!\n";
        return;/// allInq()의 호출위치로 복귀!!
    }
    for(int i=0;i<inx;i++){
     p[i].disp();
    }
    cout<<"#전체 계좌조회 작업완료.\n";
}
void makeAccid(){
    cout<<"#계좌개설 작업입니다.\n";
    char accid[SI],name[CN];
    long long money;
    bool sw;
    do{
        cout<<"계좌번호? ";fflush(stdin);gets(accid);
        sw=false;//중복계좌 체크전 초기치
        for(int i=0;i<inx;i++){
            if( strcmp(p[i].getAccid(), accid) ==0){
                cout<<"\t중복계좌임... 다시 ";
                sw=true;
                break;
            }
        }//for
    }while( sw   );
    cout<<"고 객 명? ";fflush(stdin);gets(name);
    cout<<"개설금액? ";cin>>money;
    p[inx].setData(accid,name,money);
    //cout<<"inx : "<<inx<<endl;//p[0],p[1],p[2]
    inx++;//3
    //p[0].disp();
    cout<<"#계좌개설 작업완료.\n";
}
void menu(){
   cout<<" -- 메뉴 --\n\n"; cout<<"1. 계좌개설\n";
   cout<<"2. 입금\n"; cout<<"3. 출금\n";
   cout<<"4. 계좌조회\n"; cout<<"5. 전체 계좌조회\n";
   cout<<"6. 작업종료\n\n";
}

/*DasiAccid:
    cout<<"계좌번호? ";fflush(stdin);gets(accid);
    ///중복계좌 체크
    for(int i=0;i<inx;i++){
        if( strcmp(p[i].getAccid(), accid) ==0){
            cout<<"\t중복계좌임... 다시 ";
            goto DasiAccid;
        }
    }*/




