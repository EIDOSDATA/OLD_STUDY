#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 5
#define SUBJECT 2
#define NAME_ARR 20

void rank_func(int *psc, int *prn,const int cnt);
void disp(int *psc, int *prn, const int cnt);

int main()
{

    int psc[5] = { 60, 70, 80, 90, 75 };
    int prn[5];

    const int cnt = sizeof(psc) / sizeof(int); //자신보다 작은 숫자의 개수를 셈.

    rank_func(&psc, &prn, cnt);

    disp(&psc, &prn, cnt);

    /*
    int score[10] = { 60, 70, 80, 90, 75, 85, 95, 50, 45, 30 };
    int rank[10];
    int cnt; //자신보다 작은 숫자의 개수를 셈.

    for (int i = 0; i < 10; i++)
    {
        cnt = 0; //매번 i 바뀔 때 초기화.
        for (int j = 0; j < 10; j++)
        {
            if (score[i] > score[j])   //자신보다 작다면 cnt 1증가.
            {
                cnt++;
            }
        }
        rank[i] = cnt + 1; //등수 결정.
    }
    for (int i = 0; i < 10; i++)   //출력.
    {
        printf("%d번 : %3d, 등수 : %2d\n", i, score[i], rank[i]);
    }
    */
    return 0;
}




void rank_func(int *psc, int *prn, const int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        *(prn + i) = 1;
        for (int j = 0; j < cnt; j++)
        {
            if (*(psc+i) < *(psc+j))
            {
                *(prn+i) = *(prn+i) + 1; // (*(prn+i))++;
            }
        }
    }
}

void disp(int *psc, int *prn, const int cnt)
{
    char line[] = "----------------";
    printf("점수\t등수\n");
    printf("%s\n",line);

    for(int i = 0; i < cnt; i++)
    {
        printf("%3d\t%3d\n",*(psc+i), *(prn+i));
    }
}
