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
    void setData(const char *_name, int _age, double _weight)
    {
        strcpy(name, _name);
        age = _age;
        weight = _weight;
    }
    void getData()
    {
        cout << "input name : " << name << "\ninput age : " << age << "\ninput weight : " << weight << endl;
    }
};

int main()
{
    Sinsang p; // 객체에 변수 p 선언
    Sinsang q;

    q.setData("asdf", 20, 75.5);

    cout << "SIZE : " << sizeof(p) << endl;
    cout << "SIZE : " << sizeof(q) << endl;

    q.getData();

    return 0;
}