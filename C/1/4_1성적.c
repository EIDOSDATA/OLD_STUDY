/**4성적.c   국어95, 영어 100을 변수에 할당후,
총점과 평균을 구해 아래처럼!
국어 : xxx    영어 : xxx
--------------------------
총점 : xxx    평균 : xxx.x
*/
#include<stdio.h>
int main()
{
    int kor,eng;
    kor=95;
    eng=100;
    printf("국어 : %3d\t영어 : %3d\n",kor,eng);
    printf("----------------------------\n");
    int tot;
    tot=kor+eng;
    double ave;
    ave=(double)tot/2;//  ==   ave=tot/2.0;
    printf("총점 : %3d\t평균 : %5.1f\n",tot,ave);
    return 0;
}
//printf("2.0의 byte수 : %d\n",sizeof(2.0));//8
