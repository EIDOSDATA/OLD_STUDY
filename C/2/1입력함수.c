#include <stdio.h>
/*
1입력함수 : 실행중 키보드로 입력하여 변수에 값을 할
scanf("asdfa",address1, address2);
*/

int main()
{
    int a,b;

Dasi:
    printf("input a,b\r\n>> ");
    scanf("%d,%d",&a,&b);
    printf("a == %d\r\nb == %d\r\n",a,b);

    printf("%d + %b = %d\r\n", a,b,a+b);
    printf("%d - %b = %d\r\n", a,b,a-b);
    printf("%d * %b = %d\r\n", a,b,a*b);
    printf("%d / %b = %d\r\n", a,b,a/b);

    goto Dasi;

    return 0;
}
