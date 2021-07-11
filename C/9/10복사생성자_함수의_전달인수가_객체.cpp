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
    friend class BBB;
    friend int sum(AAA q);
};
class BBB
{
public:
    int sum(AAA r)
    {
        return r.a + r.b;
    }
};

int sum(AAA q)
{
    return q.a + q.b;
}

int main()
{
    AAA p(100, 200);
    cout << "SUM : " << sum(p) << endl;
    return 0;
}