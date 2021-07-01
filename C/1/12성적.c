/**12성적.c  이름 홍 길 동, 시험지유형 b, 국어95, 영어 100을
변수에 할당후, 총점과 평균을 구해 아래처럼!
이름 : xxx    시험지유형 : x(출력은 대문자로!!)
국어 : xxx    영어 : xxx
--------------------------
총점 : xxx    평균 : xxx.x
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>//toupper(), tolower()
#define SI 20
int main()
{
    //변수의 선언
    int kor,eng,tot;
    double ave;
    char ty,name[SI];
    char line[]="------------------------------";
    //배열의 선언과동시에초기치를 줄때는 배열크기 생략가능!
    //기본값 할당
    strcpy(name,"홍 길 동");
    ty='b';
    kor=95;
    eng=100;
    //처리
    tot=kor+eng;
    ave=(double)tot/2;//  ==   ave=tot/2.0;
    //출력
    printf("이름 : %s\t시험지유형 : %c\n",name,toupper(ty));
    printf("국어 : %3d\t영어 : %3d\n",kor,eng);
    printf("%s\n",line);
    printf("총점 : %3d\t평균 : %5.1f\n",tot,ave);
    return 0;
}

