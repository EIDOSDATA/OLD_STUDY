#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 5

void rank_func(int *psc, int *prn,const int cnt);
void disp(int *psc, int *prn, const int cnt);

int main()
{

    int psc[ARRSIZE] = { 60, 70, 80, 90, 75 };
    int prn[ARRSIZE];
    const int cnt = sizeof(psc) / sizeof(int); //자신보다 작은 숫자의 개수를 셈.



    rank_func(&psc, &prn, cnt);

    disp(&psc, &prn, cnt);

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

//void disp(int *psc, int *prn, const int cnt)
void disp(int psc[], int prn[], const int cnt)
{
    char line[] = "----------------";
    printf("점수\t등수\n");
    printf("%s\n",line);

    for(int i = 0; i < cnt; i++)
    {
        printf("%3d\t%3d\n",*(psc+i), *(prn+i));
    }
}
