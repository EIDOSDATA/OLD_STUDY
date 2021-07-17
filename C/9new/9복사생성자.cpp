/**9복사생성자
p--
이름 : xxx
나이 : xx
체중 : ...
*/
#include<iostream>
#include<cstring>
#define SI 20
using namespace std;
class Sinsang{
   char name[SI];
   int age;
   double weight;
   public:
    void disp(){
        cout<<"이름 : "<<name<<endl;
        cout<<"나이 : "<<age<<endl;
        cout<<"체중 : "<<weight<<endl<<endl;
    }
    Sinsang(const char * name="no_name",int age=0,
            double weight=0){
        strcpy(this->name,name);///strcpy(멤버변수,매개변수);
        this->age=age;//멤버변수=매개변수;
        this->weight=weight;
    }
    Sinsang(const Sinsang &r){
        //cout<<"복사생성자에서 r의 주소 : "<<&r<<endl;
        strcpy(this->name,r.name);
        age=r.age;//멤버변수=매개변수;
        this->weight=r.weight;
        cout<<"복사생성자!!!!\n";
    }
};
int main()
{
    Sinsang p("홍 길 동",20,75.5);//객체변수 p선언
    //cout<<"p의 주소 : "<<&p<<endl;
    Sinsang q(p);//== Sinsang q=p;//생성된 객체로 새 객체를 생성시 복사생성자 call
    cout<<"p--\n";
    p.disp();
    cout<<"q--\n";
    q.disp();
    return 0;
}
//cout<<"p의 byte수 : "<<sizeof(p)<<endl;//32
