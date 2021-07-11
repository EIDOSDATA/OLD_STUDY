/*
1. 복사생성자의 호출
> 생성된 객체로 새 객체를 생성시
> 함수의 전달인수가 객체일 때
> 함수의 반황 값이 객체일 떄

2. 복사생성자
> 복사생성자를 상입하지 않으면 컴파일러가 삽입 == 디폴트 복사생성자
> default 복사생성자는 구체적인 일을한다.
    >> 디폴트 생성자, 소멸자는 일을 안함

> 복사생성자 형태
클래스명(const 클래스명 레퍼런스 객체변수)
{
    생성자 함수가 하는 일만 한다.
}

> 멤버변수가 동적할당된 경우 반드시 사용한다.
    >> 깊은 복사:
        멤버편수가 동적할당 된 경우
        
    >> 얕은 복사:
*/
#include <iostream>
#include <cstring>
#include <time.h>
#define ARR_SIZE 20
using namespace std;
/*
클래스 내부에 멤버 메소드를 정의한 것 또한 인라인 함수다.
*/
class Sinsang
{
private:
    char name[ARR_SIZE];
    int age;
    double weight;

public:    
    Sinsang(const char *name = "no data", int age = 0, double weight = 0.0)
    {
        strcpy(this->name, name);
        this->age = age;
        this->weight = weight;
        cout << "CALL Creator" << endl;
    };
    Sinsang(const Sinsang &r)
    {
        strcpy(this->name, r.name);
        age = r.age;
        this->weight = r.weight;
        cout << "CALL Copy Creator" << endl;
    };
    ~Sinsang()
    {
        delete[] name;
        cout << "ERASER CALL" << endl;
    };
    void disp()
    {
        cout << "input name : " << name << "\ninput age : " << age << "\ninput weight : " << weight << endl;
    }
};

int main()
{
    Sinsang p("asdf", 20, 75.5); // 객체에 변수 p 선언
    Sinsang q(p); // >> q == p
    p.disp();
    q.disp();
    return 0;
}