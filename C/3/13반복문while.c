#include <stdio.h>
#include <string.h>
#define SC_ARR_SIZE 3
#define CHAR_SIZE 20

int main()
{
    char exam_type, name[CHAR_SIZE], tag[CHAR_SIZE];
    int score[SC_ARR_SIZE], score_sum;
    float score_avg;
    char line[] = "--------------------------------------------";
Re:
    // name input
    printf("이름 :\t");
    fflush(stdin);
    gets(name);

    // type input
    printf("시험지 유형 :\t");
    fflush(stdin);
    exam_type = getchar();//scanf("%c",&exam_type);

    // score input
    printf("성적을 입력해 주세요 형식은 다음과 같습니다.\r\n국어,영어,수학\t");
    scanf("%d,%d,%d",&score[0],&score[1],&score[2]);

    printf("%s\r\n",line);

    // avg
    score_sum = score[0]+score[1]+score[2];
    score_avg = (float)score_sum / SC_ARR_SIZE;

    // tag
    if(score_avg >= 85)
        strcpy(tag,"집으로...");
    else
        strcpy(tag,"면담요망!");

    printf("이름 : %s\t시험유형 : %c\r\n",name,exam_type);
    printf("국어 : %3d\t영어 : %3d\t수학 : %3d\r\n",score[0],score[1],score[2]);
    printf("총점 : %3d \t평균 : %3.2f\r\n", score_sum, score_avg);
    printf("비고 : %s\r\n\r\n", tag);

    goto Re;
    return 0;
}

