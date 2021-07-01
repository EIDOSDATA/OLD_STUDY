#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 5
#define SUBJECT 2
#define NAME_ARR 20
int main()
{

    int score[ARRSIZE][SUBJECT], tot[ARRSIZE], rank[ARRSIZE], tmp;
    int max_score[SUBJECT];

    float tavg, avg[ARRSIZE];

    char tgrade, grade[ARRSIZE], tname[20], name[ARRSIZE][NAME_ARR];

    for(int i = 0; i < ARRSIZE; i++)
    {
        printf("이름 :\t");
        fflush(stdin);
        gets(name[i]);

        tot[i] = 0;

        printf("#%d번 학생의 국어,영어 점수입력\t", i+1);
        for(int j = 0; j < SUBJECT; j++)
        {
            scanf("%d", &score[i][j]);
            tot[i] = tot[i] + score[i][j];
        }
        avg[i] = (float)tot[i] / 2.0;

        switch((int)avg[i] / 10)
        {
        case 10:
        case 9:
            grade[i] = 'A';
            break;
        case 8:
            grade[i] = 'B';
            break;
        case 7:
            grade[i] = 'C';
            break;
        case 6:
            grade[i] = 'D';
            break;
        default:
            grade[i] = 'F';
            break;
        }
    }

    for(int i = 0; i < ARRSIZE; i++)
    {
        rank[i] = 1;
        for(int j = 1; j < ARRSIZE; j++)
        {
            if(tot[i] < tot[j])
            {
                rank[i]=rank[i]+1;
            }
        }
    }


    for(int i =  0; i < ARRSIZE - 1 ; i++)
    {
        for(int j = i + 1; j < ARRSIZE; j++)
        {
            if(rank[i] > rank[j])
            {
                strcpy(tname, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tname);

                tavg = avg[i];
                avg[i] = avg[j];
                avg[j] = tavg;

                tgrade = grade[i];
                grade[i] = grade[j];
                grade[j] = tgrade;

                tmp = score[i][0];
                score[i][0] = score[j][0];
                score[j][0]  = tmp;

                tmp = score[i][1];
                score[i][1] = score[j][1];
                score[j][1]  = tmp;

                tmp = tot[i];
                tot[i] = tot[j];
                tot[j] = tmp;

                tmp = rank[i];
                rank[i] = rank[j];
                rank[j] = tmp;
            }
        }
    }

    max_score[0] = score[0][0];
    max_score[1] = score[0][1];

    printf("국어 최고점수 : %3d\n", max_score[0]);
    printf("영어 최고점수 : %3d\n", max_score[1]);

    printf("\n\t*성적표 / 등수순*\n");
    printf("이름\t국어\t영어\t총점\t평가\t순위\n");

    for(int i = 0; i < ARRSIZE; i++)
    {
        printf("%s\t", name[i]);

        for(int j = 0; j < SUBJECT - 1; j++)
        {
            printf("%3d\t%3dasas\t", score[i][j], score[i][j]);
        }

        printf("%3d\t%c\t%d\n", tot[i], grade[i], rank[i]);
    }



    return 0;
}
