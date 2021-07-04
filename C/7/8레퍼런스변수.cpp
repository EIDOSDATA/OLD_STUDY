#include <iostream>
using namespace std;
/*
1. 이미 정의된 변수에게 별명을 붙인다.
2. 변수를 공류 >> 메모리 절약 기능.
*/

int main()
{
    int a = 100;
    int &ra = a; // 정수형의 레퍼런스 변수 ra 의 선언 >> a 라는 변수의 별명을 ra 로 한다?
    cout << "A address : " << &a << endl;
    cout << "RA address : " << &ra << endl;
    
    ra += 10;

    cout << "A value : " << a << endl;
    cout << "RA value : " << ra << endl;
    return 0;
}
