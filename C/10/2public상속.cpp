#include <iostream>
using namespace std;
/*
파생 객체 생성시 먼저 제어는 자녀 생성자로 넘어 혼 후,
부모생성자를 자동호출하여 실행 후, 자녀 생성자를 실행한다.
*/

class AAA
{
    int age;

public:
/*
    AAA()
    {
        cout << "ROOT" << endl;
    }*/
    AAA(int age)
    {
        this->age;
        cout << "ROOT CREATOR" << endl;
    }
};

class BBB : public AAA
{
    double weight;

public:
    /*BBB()
    {
        cout << "NODE" << endl;
    }*/
    BBB(int age, double weight)
    {
        this->weight = weight;
        cout << "NODE CREATOR" << endl;
    }
};

int main()
{
    BBB p(20, 75.5);
    return 0;
}