/**7float형   p45
*/
#include<stdio.h>
int main()
{
    float a,c;
    a=45.3f;
    printf("a : %f\n",a);
    int b=a;//자동형변환
    printf("b : %d\n",b);//45
    //printf("3.14의 byte수 : %d\n",sizeof(3.14));//8
    //printf("3.14F의 byte수 : %d\n",sizeof(3.14F));//4
    c=7.1111789;// c에 7.111789F저장
    printf("c : %f\n",c);//7.11178
    int d=3.14;
    printf("d : %d\n",d);//3
    int e=2147483647;
    printf("e : %d\n",e);
    int f=2147483648;//오버플로우, 쓸모 없는 값
    printf("f : %d\n",f);
    long long g=2147483648;
    printf("g : %llu\n",g);//주의 long형은 llu
    return 0;
}
