#include <iostream>
#include <cstring>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <time.h>
#define ARR_SIZE 20
#define M_PI 3.14159265358979323846 // pi
using namespace std;

class Circle
{

private:
    int r;

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
    return r * r * M_PI;
}
double Circle::getAround()
{
    return 2 * M_PI * r;
}

int main()
{
    Circle p;
    p.setRadi(5);
    cout << p.getRadi() << endl;
    cout << p.getArea() << endl;
    cout << p.getAround() << endl;

    return 0;
}
