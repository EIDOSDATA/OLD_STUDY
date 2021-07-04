#include <iostream>
#include <cstring>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <time.h>
#define ARR_SIZE 20
//#define M_PI 3.14159265358979323846
using namespace std;

class Circle
{
    int r;
    static double PI;

public:
    void setRadi(int _r)
    {
        r = _r;
    }
    int getRadi();
    double getArea();
    double getAround();
};

int Circle::getRadi()
{
    return r;
}
double Circle::getArea()
{
    return r * r * PI;
}
double Circle::getAround()
{
    return 2 * PI * r;
}
double Circle::PI = 3.141592;

int main()
{
    Circle p;
    p.setRadi(5);
    cout << p.getRadi() << endl;
    cout << p.getArea() << endl;
    cout << p.getAround() << endl;
    cout << "SIZE : " << sizeof(p) << endl
         << endl;

    Circle q;
    p.setRadi(52);
    cout << q.getRadi() << endl;
    cout << q.getArea() << endl;
    cout << q.getAround() << endl;
    cout << "SIZE : " << sizeof(q) << endl;

    return 0;
}
