/**15const멤버변수 :  모든 멤버메소드안 에서 변경불가
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
   const int age;//const 맴버변수의 선언
   const double weight;
   public:
    void disp(){
        //age-=3;error const 맴버변수는 멤버메소드안에서 변경불가
        cout<<"이름 : "<<name<<endl;
        cout<<"나이 : "<<age<<endl;
        cout<<"체중 : "<<weight<<endl<<endl;
    }
    Sinsang(const char * name="no_name",int _age=0,
   double _weight=0):age(_age),weight(_weight) {
       strcpy(this->name,name);
    }
};
int main()
{
    Sinsang p("홍 길 동",20,75.5);//객체변수 p선언
    cout<<"p--\n";
    p.disp();
    return 0;
}
//cout<<"p의 byte수 : "<<sizeof(p)<<endl;//32
