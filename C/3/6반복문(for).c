#include <stdio.h>

int main()
{
    int i = 0;
    for(i = 10; i<=50; i+=10)
    {
        printf("i == %d\n",i);
    }
    printf("for 를 벗어나서의 i : %d", i);

    return 0;
}
