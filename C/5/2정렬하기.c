#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 5
/*
오름차순 정렬 >> 큰 값 순으로 정렬
내림차순 정렬 >> 작은 값 순으로 정렬
*/

int main()
{
    int a[ARR_SIZE] = {79, 11, 180, 56, 23};
    int* tmp = malloc(sizeof(int));


    // bubble sort1
    for(int i =  0; i < ARR_SIZE - 1 ; i++)
    {
        for(int j = i + 1; j < ARR_SIZE; j++)
        {
            if(a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j]  = tmp;
                printf("bubble sort1 swap\n");
            }
        }
    }

    // bubble sort2
    for(int i =  0; i < ARR_SIZE ; i++)
    {
        for(int j = 0; j < ARR_SIZE; j++)
        {
            if(a[j] < a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1]  = tmp;
                printf("bubble sort2 swap\n");
            }
        }
    }

    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("Arr : %d\n", a[i]);
    }

    free(tmp);
    return 0;
}
