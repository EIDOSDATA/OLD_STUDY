/**13멤버변수의 동적할당_깊은복사 :
     멤버변수가 동적할당되었을때  반드시 복사생성자를 삽입
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
   char *name;
   int age;
   double weight;
   public:
   ~Sinsang(){
       delete []name;
       /**멤버변수name에는 heap에 확보된 공간의 주소가 들어있음
       그 주소로 접근하여 heap에 확보된 공간을 삭제 */
       cout<<"소멸자!!!\n";   }
    Sinsang(const char * name="no_name",int age=0,
            double weight=0.0){
        this->name=new char[strlen(name) +1];//heap에 공간확보
 /**멤버변수의 동적할당에서 공간확보 :매개변수name에는 홍 길 동이 기억된 주소가 들어
 있음.그 주소로 접근하여 글자수를 세고(8), +1('\0')한 크기로 char형의
  공간을  heap에 확보후, 그 공간의 주소를 멤버변수에게 반환 */
        strcpy(this->name,name);///할당
        this->age=age;//멤버변수=매개변수;
        this->weight=weight;
    }
    Sinsang(const Sinsang &r){
        this->name=new char[strlen(r.name) +1];//heap에 공간확보
         strcpy(this->name,r.name);///할당
        age=r.age;//멤버변수=매개변수;
        weight=r.weight;
        cout<<"복사생성자!\n";
    }
    void disp(){
        cout<<"이름 : "<<name<<endl;
        cout<<"나이 : "<<age<<endl;
        cout<<"체중 : "<<weight<<endl<<endl;
    }
};
int main()
{
    Sinsang p("홍 길 동",20,75.5);
    Sinsang q(p);
    cout<<"p--\n";
    p.disp();
    cout<<"q--\n";
    q.disp();
    return 0;
}
/**소멸자!   [q객체 삭제시]
      소멸자!   [p객체 삭제시]
*/
