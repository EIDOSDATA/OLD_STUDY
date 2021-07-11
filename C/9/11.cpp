#include <iostream>
using namespace std;
class AAA
{
    int a;
    int b;

public:
    AAA(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    AAA(const AAA & r)
    {
        this->a = r.a;
        b = r.b;
        cout << "copy creator" << endl;
    }
    friend int sum(AAA &q);
};

int sum(AAA &q)
{
    return q.a + q.b;
}

int main()
{
    AAA p(100, 200);
    cout << "SUM : " << sum(p) << endl;
    return 0;
}