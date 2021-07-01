#include <stdio.h>
#define NAME_SIZE 20

int main()
{
    char name[NAME_SIZE];
    double le,re,avg;
    char line[] = "--------------------------------------------";
RE:
    printf("성명을 입력해주세요\t");fflush(stdin);
    gets(name); // scanf("%s",name);

    printf("좌,우 시력을 입력해주세요\t");
    scanf("%lf,%lf", &le, &re);

    avg = (le+re) / 2;

    printf("%s\r\n",line);
    printf("성명 : %s \r\n평균시력 : %.2f\r\n", name, avg);

    goto RE;




    return 0;
}
