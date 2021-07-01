#include <stdio.h>

int main()
{
    int score, input_cnt;
    char grade;

Re:

    printf("점수 입력\t");
    input_cnt = scanf("%d", &score);

    // 문자 입력시 종료
    if(input_cnt == 0)
    {
        printf("문자열이 입력되어 종료합니다.\r\n");
        return 0;
    }

    // 점수 범위 초과 또는 미만
    if(score > 100 || score < 0)
    {
        printf("점수 범위가 아니라서 다시받습니다.\r\n");
        goto Re;
    }
/*
    if(score >= 90)
        grade = 'A';
    else if(score >= 80)
        grade = 'B';
    else if(score >= 70)
        grade = 'C';
    else if(score >= 60)
        grade = 'D';
    else
        grade = 'F';
        */

    switch(score/10)
    {
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }
    printf("점수 : %3d\t평가 : %c\r\n\r\n",score, grade);

    goto Re;


    return 0;
}
