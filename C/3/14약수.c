#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    unsigned int num, cnt, k;


    while(1)
    {
        cnt = 0;

        printf("input number\t");
        fflush(stdin);
        k = scanf("%d", &num);

        if(num <= 0 || k == 0)
        {
            printf("FUCK U\n");
            break;
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

    }
    return 0;
}
