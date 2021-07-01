#include <stdio.h>

int main()
{
    int score, input_cnt;
    char grade;

Re:

    printf("점수 입력\t");
    input_cnt = scanf("%d", &score);


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
    printf("점수 : %3d\t평가 : %c\r\n\r\n",score, grade);
    goto Re;


    return 0;
}
