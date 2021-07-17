/**8friend객체
AAA 클래스입장에서  sum()함수에게 자신의 private영역을 공개!!
*/
#include<iostream>
using namespace std;
class AAA{
    int a;
    int b;
public:
    AAA(int a=0, int b=0){this->a=a; this->b=b; }
    friend class BBB;//friend 클래스선언
};
class BBB{
public:
    int sum(AAA r){
        return r.a+r.b;
    }
};
int main()
{
    AAA p(100,200);
    BBB q;
    cout<<"합 : "<<q.sum(p)<<endl;
    return 0;
}
