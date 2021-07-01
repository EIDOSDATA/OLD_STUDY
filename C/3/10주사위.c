#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int r,total;
    int arr_r[6] = {0,0,0,0,0,0};

    srand( time(NULL)); // 실행시간이 다르면 난수를 새로 생성한다.

    for(int i = 1; i<=100 ; i++)
    {
        r = rand() % 6 + 1;
        switch(r)
        {
        case 1:
            arr_r[r-1]++;
            break;
        case 2:
            arr_r[r-1]++;
            break;
        case 3:
            arr_r[r-1]++;
            break;
        case 4:
            arr_r[r-1]++;
            break;
        case 5:
            arr_r[r-1]++;
            break;
        case 6:
            arr_r[r-1]++;
            break;
        }
        printf("%d  ", r);
        if(i % 10 == 0)
            printf("\n");
    }
    for(int i = 0; i<6 ; i++)
    {
        total += arr_r[i];
        printf("%d의 갯수 : %d\n",i+1, arr_r[i]);
    }
    printf("전체 갯수 : %d", total);

    return 0;
}
