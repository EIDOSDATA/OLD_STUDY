#include <stdio.h>
long long Factorial(num);

int main()
{
    int num, inputchk;

    while(1)
    {
        printf("input number\t");
        fflush(stdin);
        inputchk = scanf("%d", &num);

        if(num < 0 || inputchk == 0)
            break;

        printf("%d Factorial : %lld\n\n", num, Factorial(num));
    }
    printf("END OF TIME\n");

    return 0;
}

long long Factorial(int num)
{
    long long f = 1;
    for(int i = 1; i <= num; i++)
    {
        f *= i;
    }
    return f;
}
