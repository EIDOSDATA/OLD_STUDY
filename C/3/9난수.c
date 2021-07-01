#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int r;

    srand( time(NULL)); // 실행시간이 다르면 난수를 새로 생성한다.

    for(int i = 1; i<=100 ; i++)
    {
        r = rand() % 6 + 1;
        printf("%d - rand :%d\n", i, r);
    }
    return 0;
}
