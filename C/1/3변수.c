/**3변수
10 + 3 = 13
10 - 3 = 7
...
*/
#include<stdio.h>
int main()
{
    int a,b;//정수형변수의 선언
    a=10;
    b=3;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d / %d = %f\n",a,b,a/(double)b);
    printf("%d / %.1f = %f\n",
           a,(double)b,a/(double)b);
    printf("%d %% %d = %d\n",a,b,a%b);
    return 0;
}
/*
    printf("a : %d\tb : %d\n",a,b);
    printf("int형의 byte수 : %d\n",sizeof(int));//4
    printf("3의 byte수 : %d\n",sizeof(3));//4
    printf("long long형의 byte수 : %d\n",sizeof(long long));
    printf("double형의 byte수 : %d\n",sizeof(double));
 */
