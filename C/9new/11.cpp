/**11
AAA 클래스입장에서  sum()함수에게 자신의 private영역을 공개!!
*/
#include<iostream>
using namespace std;
class AAA{
    int a;
    int b;
public:
    AAA(int a=0, int b=0){this->a=a; this->b=b; }
    AAA(const AAA &r){
        this->a=r.a; b=r.b;
      cout<<"복사생성자!\n";
    }
    friend int sum(AAA &q);//friend함수 선언
};
int sum(AAA &q){
    cout<<"q의 주소 : "<<&q<<endl;
    return q.a+q.b;
 }
int main()
{
    AAA p(100,200);
    cout<<"p의 주소 : "<<&p<<endl;
    cout<<"합 : "<<sum(p)<<endl;
    ///call by reference기법이라서 복사생성자 필요 x
    return 0;
}
