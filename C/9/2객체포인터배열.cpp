#include <iostream>
#define SIZE 5
using namespace std;
class Point
{
    int x;
    int y;

public:
    Point(int x, int y)
    {
        cout << "creator" << endl;
        this->x = x;
        this->y = y;
    }
    ~Point()
    {
        cout << "eraser" << endl;
    }

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
    Point *pa[SIZE];
    cout << "*PA SIZE : " << sizeof(pa) << endl;

    // new 연산자는 생성자 함수로 Heap에 Point 객체를 생성한다.
    for (int i = 0; i < SIZE; i++)
        pa[i] = new Point(i * 2, i * 5);

    // heap 에 동적생성된 객체는 소멸자를 자동호출하지 않는다.
    //
    for (int i = 0; i < SIZE; i++)
        pa[i]->disp();

    // PA[i] 에는 heap에 생성된 객체의 주소가 있다.
    // 그 주소로 접근해 heap에 생성된 Point 객체를 삭제한다.
    for (int i = 0; i < SIZE; i++)
        delete pa[i];
    return 0;
}