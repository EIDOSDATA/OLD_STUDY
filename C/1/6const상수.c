/**6const상수.c  반지름이 5인 원의 넓이와 둘레를 구해 아래처럼!
(단 파이는 3.1415927)
반지름 : x
원의 넓이 : xx.xxxx
원의 둘레 : xx.xxxx
*/
#include<stdio.h>
//double PI=3.1415927;//전역변수 PI
const double PI=3.1415927;//const상수 PI
int main()
{
    int r;
    double area,dul;
    r=5;
    area=r*r*PI;
    //PI=3.14; // error  CONST상수는  pg.내에서 변경불가!!
    dul=2*r*PI;
    printf("반지름 : %d\n",r);
    printf("원의 넓이 : %.4f\n",area);
    printf("원의 둘레 : %.4f\n",dul);
    return 0;
}
