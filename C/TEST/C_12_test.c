#include <stdio.h>
#define ARRSIZE 10
int main()
{
    int score;
    char grade;

    while (1)
    {
        printf("SCORE INPUT :\t");
        fflush(stdin);
        scanf("%d", &score);
        if (score >= 0 && score <= 100)
        {
            break;
        }
        printf("ERROR!! RETRY AGAIN!\n");
    }
    switch ((int)score / 10)
    {
    case 10:
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

    printf("\n\t*SCORE*\n");
    printf("SCORE : %d\t GRADE : %c\n", score, grade);

    return 0;
}
