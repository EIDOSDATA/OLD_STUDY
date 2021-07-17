/**16const멤버함수 :
1) const멤버함수안에서는 모든 멤버변수의 변경불가!
2) const멤버함수안에서 호출된 함수도 const함수여야 함
3) const멤버함수의 반환값은 포인터형이어서는 안된다.
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
   double weight;
   public:
    int getAge() const { return  age; }
    const char * getName() const { return name; }
    void disp() const{
  //strcpy(name,"홍 아 름");error const멤버함수안에서는 모든 멤버변수의 변경불가!
        cout<<"이름 : "<<getName()<<endl;
        cout<<"나이 : "<<getAge()<<endl;
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
