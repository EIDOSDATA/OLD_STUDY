#include <stdio.h>
#include <stdlib.h>
#define HEIGHT 6
#define WIDTH 8
/*
int a[3][4];
1,2,3,4
5,6,7,8
9,10,11,12

*/

int main()
{
    /*
    int **arr = (int**) malloc(sizeof(int*) * HEIGHT );

    for(int i=0; i < HEIGHT; i++)
    {
        arr[i] = (int*) malloc (sizeof(int) * WIDTH );
    }

    for(int i = 0; i < HEIGHT; i++)
    {
        for(int j = 0; j < WIDTH; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    free(arr);
    */
    /*
    int a[3][4] =
    {
        1,2,3,4,5,6,7,8,9,10,11,12
    };
    */

    int a[3][4] =
    {
        {1,2}, {3,4,5,6}, {7,8,}, {0,011,12}
    };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n2차원 배열 A의 주소 확인\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("&a[%d][%d] : %u\t", i, j, &a[i][j]);
        }
        printf("\n");
    }



    return 0;
}
