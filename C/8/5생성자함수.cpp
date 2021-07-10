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
    Sinsang(){};
    Sinsang(const char *_name, int _age, double _weight)
    {
        strcpy(name, _name);
        age = _age;
        weight = _weight;
        cout << "CALL Creator" << endl;
    };
    ~Sinsang()
    {
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
    Sinsang q;
    p.disp();
    return 0;
}