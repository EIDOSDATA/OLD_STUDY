#include <stdio.h>
#define SC_ARR_SIZE 3

int main()
{
    int score[SC_ARR_SIZE];
    int score_sum;
    float score_avg;
    char line[] = "--------------------------------------------";

    printf("성적을 입력해 주세요 형식은 다음과 같습니다.\r\n국어,영어,수학\r\n");

    printf("%s\r\n",line);

    scanf("%d,%d,%d",&score[0],&score[1],&score[2]);

    score_sum = score[0]+score[1]+score[2];

    score_avg = (float)score_sum / SC_ARR_SIZE;



    printf("국어 : %3d\t영어 : %3d\t수학 : %3d\r\n",score[0],score[1],score[2]);
    printf("총점 : %3d \t평균 : %3.2f", score_sum, score_avg);





    return 0;
}

