#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int num, cnt, k;
RE:
    cnt = 0;

    printf("input number\t");
    fflush(stdin);
    k = scanf("%d", &num);

    if(num <= 0 || k == 0)
    {
        printf("FUCK U\n");
        return 0;
    }

    for(int i = 1; i<=num ; i++)
    {
        if(num % i == 0)
        {
            printf("%d  ", i);
            cnt++;
        }
    }
    printf("cnt : %d\n",cnt);
    goto RE;

    return 0;
}
