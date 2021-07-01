#include <stdio.h>

int main()
{
    int i = 99, sum;
    do
    {
        i++;

        if(i % 10 == 0)
        {
            printf("\n");
        }
        if(i % 7 == 0)
        {
            continue;
        }
        sum += i;
        printf("%4d", i);

    }
    while(i < 200);
    printf("\n전체 합 : %d\n", sum);

    return 0;
}
