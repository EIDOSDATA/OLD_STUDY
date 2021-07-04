#include <iostream>
using namespace std;

void func(int a, int b)
{
    cout << "SUM : " << a + b << endl;
}
void func()
{
    cout << "HELLO?" << endl;
}
void func(const char *str, int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << str << endl;
    }
}

int main()
{
    func(100, 99);
    func(5, 3.14);
    func();
    char ss[] = "FUCKU";
    //func(ss, 5);
    func("hello", 10); // 경고가 생긴다. 이게 char * 인지 
    return 0;
}