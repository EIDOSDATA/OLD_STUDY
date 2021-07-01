#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 5

void show_func(int *a);
void asc_sort_func(int *a);
void desc_sort_func(int *a);

int main()
{
    int a[ARR_SIZE] = { 60, 70, 80, 90, 75 };

    show_func(a);

    asc_sort_func(a);

    show_func(a);

    desc_sort_func(a);

    show_func(a);

    return 0;
}

void desc_sort_func(int *a)
{
    int tmp;

    for(int i =  0; i < ARR_SIZE - 1 ; i++)
    {
        for(int j = i + 1; j < ARR_SIZE; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j]  = tmp;
                printf("bubble sort1 swap\n");
            }
        }
    }
    printf("\n\n");
}

void asc_sort_func(int *a)
{
    int tmp;

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
    printf("\n\n");
}

void show_func(int *a)
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
}
