#include <iostream>
#include <cstring>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <string>

#define ARR_SIZE 20
#define SIZE 5
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
    void setData(const char *_name, int _age, double _weight);
    char *getName();
    int getAge();
    double getWeight();
    void getData();
    void disp();
};
// Sinsang :: 가 클래스에 속해 있다는 것을 의미함
// std::cout 과 등일함.
void Sinsang::setData(const char *_name, int _age, double _weight)
{
    strcpy(name, _name);
    age = _age;
    weight = _weight;
}
char *Sinsang::getName()
{
    return name;
}
int Sinsang::getAge()
{
    return age;
}
double Sinsang::getWeight()
{
    return weight;
}

void Sinsang::getData()
{
    cout << "input name : " << name << "\ninput age : " << age << "\ninput weight : " << weight << endl;
}
void Sinsang::disp()
{
    cout << name << "\t" << age << "\t" << weight << "\t" << endl;
}

int main()
{
    Sinsang p[SIZE]; // 객체에 변수 p 선언
    char name[ARR_SIZE];
    int age;
    double weight;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "name input :\t" << ends;
        fflush(stdin);
        cin.getline(name, sizeof(name));
        cout << "age input :\t" << ends;
        cin >> age;
        cout << "weight input :\t" << ends;
        cin >> weight;
        p[i].setData(name, age, weight);
        cout << "=======================" << endl;
    }

    cout << "NAME\tAGE\tWEIGHT" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout<< left << p[i].getName() << "\t" << right << p[i].getAge() << ends;
        printf("\t%.5lf\n", p[i].getWeight());
    }

    return 0;
}