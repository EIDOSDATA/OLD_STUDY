#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a = 10;
    while(a < 50)
    {
        printf("%d\n", a);
        a += 10;
    }
    printf("%d\n", a);
    return 0;
}
