/**11문자열
char name[9];
name : 배열명== 배열의시작주소 == &name[0]
9 : 배열의 크기 ==배열 요소의 갯수
name[0]name[1]...name[8]이 연속공간에 배치
1)  printf()에서 %s는 주소를 대응시키면 '\0'전까지의
모든 문자열을 출력*/
#include<stdio.h>
#include<string.h>//strcpy(주소1, 주소2);
#define SI 20
int main()
{
    char name[SI];//선언
    //name="홍 길 동";// error
   strcpy(name,"홍 길 동");//strcpy(&name[0],"홍 길 동");//할당
    printf("name : %s\n",name);
    printf("&name[0] : %s\n",&name[0]);
    printf("\t주소의 확인--\n\t   name ==  &name[0] \n");
    printf("name : %u\t",name);
    printf("&name[0] : %u\n",&name[0]);
    return 0;
}
