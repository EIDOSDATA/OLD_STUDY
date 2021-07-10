#include <iostream>
#define SIZE 5
using namespace std;
class Point
{
    int x;
    int y;

public:
    void disp()
    {
        cout << "X : " << x << "\tY : " << y << endl;
    }
    void setXY(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

int main()
{
    //Point q;
    //cout << "Q byte : " << sizeof(q) << endl;
    Point p[SIZE];
    cout << "Q byte : " << sizeof(p) << endl;
    /*
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d : %u\n", i, &p[i]);
        cout << "Q Address : " << &p[i] << endl;
    }
    */
    for (int i = 0; i < SIZE; i++)
    {
        p[i].setXY(i * 2, i * 5);
        p[i].disp();
    }
    return 0;
}