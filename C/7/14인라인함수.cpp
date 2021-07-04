/*
매크로함수
장점 : 매크로 함수식이 명령줄 사이에서 lnline 되므로 사용자 함수에 비해 처리속도가 빠르다.
단점 : 함수의 구현이 자유롭지 않다.

사용자함수
장점 : 함수 구현이 자유롭다.
단점 : 제어가 넘어간 후 처리후 복귀되므로 매크로 함수에 비해 속도가 느리다.

인라인 함수 
장점 : 사용자 함수의 장점 + 매크로 함수의 장점
사용법 
    함수 명령줄이 3~5 내외 짧을 것
    >> 명령줄이 너무 길면 compile양이 커지므로 메모리의 과부하를 초래 할 수 있다.
    적절한 빈도수의 호출
    >> 과도한 빈도수의 호출은 제어가 넘어간 후 처리후 복귀되는 것이 낫다.

객체 : class로 자료형 생성
*/
#include <time.h>
#include <iostream>
#include <iomanip>
using namespace std;
//#define Sqare(x) x*x;
int Sqare(int x) // inline int Sqare(int x)
{
    return x * x;
}
int main()
{
    clock_t start, end;
    double result;
    start = clock(); // 수행 시간 측정 시작

    for (int i = 0; i < 10000; i++)
    {
        cout << setw(2) << i << " Sqare : " << setw(3) << Sqare(i) << endl;
    }

    end = clock(); //시간 측정 끝
    result = (double)(end - start);

    // 결과 출력
    cout << "result : " << ((result) / CLOCKS_PER_SEC) << " seconds" << endl;
    return 0;
}
