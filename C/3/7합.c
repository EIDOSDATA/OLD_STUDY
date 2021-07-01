#include <stdio.h>

int main()
{
    int i = 0, sum = 0, total;
    char line[] = "--------------------------";
    for(i = 1; i<101; i++)
    {
        printf("%3d\t",i);
        sum += i;
        if(i % 10 == 0)
        {
            printf("sum = %d", sum);
            total += sum;
            sum = 0;
            printf("\n");
        }
    }
    printf("%s\n", line);
    printf("전체 합 : %d", total);

    return 0;
}
