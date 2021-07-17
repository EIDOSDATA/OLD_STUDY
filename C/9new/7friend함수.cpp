/**7friend함수
AAA 클래스입장에서  sum()함수에게 자신의 private영역을 공개!!
*/
#include<iostream>
using namespace std;
class AAA{
    int a;
    int b;
public:
    AAA(int a=0, int b=0){this->a=a; this->b=b; }
    friend int sum(AAA q);//friend함수 선언
};
int sum(AAA q){
    return q.a+q.b;
 }
int main()
{
    AAA p(100,200);
    cout<<"합 : "<<sum(p)<<endl;
    return 0;
}
