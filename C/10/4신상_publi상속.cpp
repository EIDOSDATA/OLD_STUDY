#include <iostream>
#include <cstring>
#include <time.h>
#define ARR_SIZE 20
using namespace std;
/*
클래스 내부에 멤버 메소드를 정의한 것 또한 인라인 함수다.
*/
class Person
{
    char name[ARR_SIZE];
    int age;
public:
    Person()
    {

    }
};

class Sinsang
{
private:
    char name[ARR_SIZE];
    const int age;
    const double weight;

public:    
    Sinsang(const char *name = "no data", int _age = 0, double _weight = 0.0) : 
    age(_age),
    weight(_weight)
    {
        strcpy(this->name, name);        
        cout << "CALL Creator" << endl;
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
    //Sinsang q(p); // >> q == p
    p.disp();
    //q.disp();
    return 0;
}