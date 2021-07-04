/*
함수의 구별 : 함수명, 전달 인수의 갯수, 전달 인수의 자료형
1. C 언어 : 함수명
2. C++ : 함수명, 전달 인수의 갯수, 전달 인수의 자료형
*/
#include <iostream>
#define ARR_SIZE 20
using namespace std;
namespace AAA
{
    void fun()
    {
        cout << "AAA : Today is Sunday1212" << endl;

    }    
} // namespace AAA


namespace BBB
{
    void fun()
    {
        cout << "BBB : WTF" << endl;
    }

} // namespace BBB

void fun()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "HELLO C++" << endl;
    }    
}

int main()
{
    AAA::fun();
    BBB::fun();
    fun();
    
    return 0;
}
