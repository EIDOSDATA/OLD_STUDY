#include<stdio.h>
int main(void)
{
    int i, j;

    for (int i = 5; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
