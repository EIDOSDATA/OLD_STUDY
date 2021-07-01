#include <stdio.h>
void Factorial(int num1, int num2);

int main()
{
    int num1 = 100, num2 = 200;

    printf("BE :\t");
    printf("num1 : %d\tnum2 : %d\n",num1, num2);

    Swap(&num1, &num2);

    printf("AF :\t");
    printf("num1 : %d\tnum2 : %d\n",num1, num2);

    return 0;
}

void Swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    return 0;
}
