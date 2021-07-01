/**13서로의 값 바꾸기  a에 100, b에 999를 할당후 출력하고,
서로의 값을 바꾼후 아래처럼!
원래--
a : 100    b : 999
바꾼후--
a : 999    b : 100
*/
#include<stdio.h>
int main()
{
    int a=100, b=999,temp;
    printf("원래--\n");
    printf("a : %d\tb : %d\n",a,b);
    //서로의 값바꾸기
    temp=a;
    a=b;
    b=temp;
    printf("바꾼후--\n");
    printf("a : %d\tb : %d\n",a,b);
    return 0;
}
