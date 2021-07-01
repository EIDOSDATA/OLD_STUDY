/**14특수문자 이름은 홍 길 동, 나이는 20, 체중은 75.5를 변수에
할당후, 아래처럼!   p51참조!!
홍 길 동'의 나이는 \20\살이구요,
체중은 "75.5" kg입니다.
*/
#include<stdio.h>
#include<string.h>
#define SI 20
int main()
{
    char name[SI];
    int age;
    double weight;
    strcpy(name,"홍 길 동");
    age=20;
    weight=75.5;
    printf("%s : %d");
    return 0;
}
