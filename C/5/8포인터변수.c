#include <stdio.h>

int main()
{
    int a = 100;
    int *pa;
    pa = &a; // A의 주소로 초기화

    printf("A address : %u\n", &a);
    printf("PA : %u\n\n", pa);

    pa = a;
    printf("A address : %u\n", &a);
    printf("PA : %u\n\n", &pa);

    printf("PA의 Byte : %d", sizeof(pa));
    return 0;
}
