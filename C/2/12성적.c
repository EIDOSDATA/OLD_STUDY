#include <stdio.h>
#include <string.h>
#define SC_ARR_SIZE 3
#define CHAR_SIZE 20

int main()
{
    char exam_type, name[CHAR_SIZE], tag[CHAR_SIZE],grade;
    int score[SC_ARR_SIZE], score_sum, input_cnt;
    float score_avg;
    char line[] = "--------------------------------------------";
Re:
    // name input
    printf("이름 :\t");
    fflush(stdin);
    gets(name);

    if(strcmp(name,"") == 0)
    {
        printf("종료합니다.");
        return 0;
    }

    // type input
    printf("시험지 유형 :\t");
    fflush(stdin);
    exam_type = getchar();//scanf("%c",&exam_type);

Re_score_input:
    // score input
    printf("성적을 입력해 주세요 형식은 다음과 같습니다.\r\n국어,영어,수학\t");
    input_cnt = scanf("%d,%d,%d",&score[0],&score[1],&score[2]);


   // 문자 입력시 종료
    if(input_cnt == 0)
    {
        printf("문자열이 입력되어 종료합니다.\r\n");
        return 0;
    }


    int cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        if(score[i] > 100 || score[i] < 0)
        {
            printf("%d번째 과목 점수가 이상합니다.\r\n", i+1);
            cnt++;
        }
        else
            printf("%d d번 과목 점수 : %d\r\n", i+1, score[i]);
    }
    if(cnt != 0)
    {
        printf("비정상적으로 입력됨 재 입력 시도.\r\n");
        goto Re_score_input;
    }

    printf("%s\r\n",line);

    // avg
    score_sum = score[0]+score[1]+score[2];
    score_avg = (float)score_sum / SC_ARR_SIZE;

    // tag
    if(score_avg >= 85)
        strcpy(tag,"집으로...");
    else
        strcpy(tag,"면담요망!");

    if(score_avg >= 90)
        grade = 'A';
    else if(score_avg >= 80)
        grade = 'B';
    else if(score_avg >= 70)
        grade = 'C';
    else if(score_avg >= 60)
        grade = 'D';
    else
        grade = 'F';


    printf("이름 : %s\t시험유형 : %c\r\n",name,exam_type);
    printf("국어 : %3d\t영어 : %3d\t수학 : %3d\r\n",score[0],score[1],score[2]);
    printf("총점 : %3d \t평균 : %3.2f\r\n", score_sum, score_avg);
    printf("평가 : %c 비고 : %s\r\n\r\n", grade,tag);

    goto Re;
    return 0;
}

