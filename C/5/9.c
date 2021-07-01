#include <stdio.h>
#define ARR_SIZE 5

int main()
{
    int a[5] = {11,100,78,82,91};
    int *pa = a;

    printf("A address : %u\n", &a);
    printf("PA Value : %u\n\n", pa);

    printf("PA Address : %u\n\n", &pa);

    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("a[%d] : %d\t", i, &a[i]); // &a[i] == pa+i
        printf("pa + %d : %d\n", i, pa + i); // &a[i] == pa+i
    }

    printf("\n\n");

    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("a[%d] : %d\t", i, a[i]); // a[i] == *(pa+i)
        printf("pa + %d : %d\n", i, *(pa + i)); // a[i] == *(pa+i)
    }

    return 0;
}
