/**9성적.c   시험지유형 b, 국어95, 영어 100을 변수에 할당후,
총점과 평균을 구해 아래처럼!
시험지유형 : x
국어 : xxx    영어 : xxx
--------------------------
총점 : xxx    평균 : xxx.x
*/
#include<stdio.h>
int main()
{
    //변수의 선언
    int kor,eng,tot;
    double ave;
    char ty;
    //기본값 할당
    ty='b';
    kor=95;
    eng=100;
    //처리
    tot=kor+eng;
    ave=(double)tot/2;//  ==   ave=tot/2.0;
    //출력
    printf("시험지유형 : %c\n",ty);
    printf("국어 : %3d\t영어 : %3d\n",kor,eng);
    printf("----------------------------\n");
    printf("총점 : %3d\t평균 : %5.1f\n",tot,ave);
    return 0;
}

