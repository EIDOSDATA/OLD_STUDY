/*
1. 생성자함수
> 객체 생성시 자동호출
> 생성자함수명은 클래스명과 같고 반환값은 없다.
> PG 가 생성자함수를 삽입하지 않으면 Compiler 가 자동삽입을 한다. == Default 생성자 함수
    >> 클래스명 () {}
> 함수에 오버로딩 기능이 있다.

2. 소멸자함수
> 객체 소멸시 자동호출
> 소멸자 함수명은 <~클래스명> 과 같고 반환값은 없다.
> PG가 소멸자 함수를 삽입하지 않으면 Compiler 가 자동삽입을 한다. == Default 생성자 함수
    >> 클래스명 () {}
> 함수에 오버로딩이 없다.
> 객체의 소멸 순서 : LIFO;

*/
#include <iostream>
#include <cstring>
#include <time.h>
#define ARR_SIZE 20
using namespace std;

class Sinsang
{
private:
    char *name;
    int age;
    double weight;

public:
    Sinsang(const char *name = "no data", int age = 0, double weight = 0.0)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
        this->weight = weight;
        cout << "CALL Creator" << endl;
    };
    Sinsang(const Sinsang &r)
    {
        this->name = new char[strlen(r.name) + 1];
        strcpy(this->name, r.name);
        this->age = r.age;
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
    Sinsang q(p);
    cout << "---------------------" << endl;
    p.disp();
    cout << "---------------------" << endl;
    q.disp();
    cout << "---------------------" << endl;
    return 0;
}