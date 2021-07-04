#include <iostream>
#define ARR_SIZE 20
using namespace std;
namespace AAA
{
    void fun();
}
namespace BBB
{
    void fun();
}
void fun();

int main()
{
    AAA::fun();
    BBB::fun();
    fun();

    return 0;
}

namespace AAA
{
    void fun()
    {
        cout << "AAA : Today is Sunday" << endl;
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
    for (int i = 0; i < 5; i++)
    {
        cout << "HELLO C++" << endl;
    }
}