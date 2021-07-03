/*
    1. 연산 우선순위 : () > .(dot) > *
    >> (*s).member  O
    >> s->member    O
    >> *s.member    X
*/

#include <stdio.h>
#include <string.h>
#define ARR_SIZE 5
#define CHAR_SIZE 20

struct score
{
    int hno;
    char name[CHAR_SIZE];
    int kor;
    int eng;
    int tot;
    float avg;
    char grade;
    int rank;
}; // 45 byte

typedef struct score ss;
void calc(ss *s);
void rank(ss *s);
void rank_sort(ss *s);
void disp(ss *s);

int main()
{
    ss s[ARR_SIZE] =
        {
            {1122, "a", 95, 100},
            {1124, "b", 85, 70},
            {1125, "c", 100, 100},
            {1126, "d", 65, 70},
            {1127, "e", 85, 80}};
    calc(&s);
    rank(&s);
    disp(&s);

    rank_sort(&s);
    disp(&s);

    printf("%d", sizeof(s));

    return 0;
}

void calc(ss *s)
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        (s + i)->tot = (s + i)->kor + (s + i)->eng;
        (s + i)->avg = (float)(s + i)->tot / 2.0f;

        switch ((int)(s + i)->avg / 10)
        {
        case 10:
        case 9:
            (s + i)->grade = 'A';
            break;
        case 8:
            (s + i)->grade = 'B';
            break;
        case 7:
            (s + i)->grade = 'C';
            break;
        case 6:
            (s + i)->grade = 'D';
            break;
        case 5:
            (s + i)->grade = 'E';
            break;
        default:
            (s + i)->grade = 'F';
            break;
        }
    }
}

void rank(ss *s)
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        (s + i)->rank = 1;
        for (int j = 0; j < ARR_SIZE; j++)
        {
            if ((s + i)->tot < (s + j)->tot)
            {
                (s + i)->rank = (s + i)->rank + 1;
            }
        }
    }
}

void rank_sort(ss *s)
{
    char tname[CHAR_SIZE], tgrade;
    float tavg;
    int tmp;
    for (int i = 0; i < ARR_SIZE - 1; i++)
    {
        for (int j = i + 1; j < ARR_SIZE; j++)
        {
            if ((s + i)->rank > (s + j)->rank)
            {
                strcpy(tname, (s + i)->name);
                strcpy((s + i)->name, (s + j)->name);
                strcpy((s + j)->name, tname);

                tavg = (s + i)->avg;
                (s + i)->avg = (s + j)->avg;
                (s + j)->avg = tavg;

                tgrade = (s + i)->grade;
                (s + i)->grade = (s + j)->grade;
                (s + j)->grade = tgrade;

                tmp = (s + i)->kor;
                (s + i)->kor = (s + j)->kor;
                (s + j)->kor = tmp;

                tmp = (s + i)->eng;
                (s + i)->eng = (s + j)->eng;
                (s + j)->eng = tmp;

                tmp = (s + i)->tot;
                (s + i)->tot = (s + j)->tot;
                (s + j)->tot = tmp;

                tmp = (s + i)->rank;
                (s + i)->rank = (s + j)->rank;
                (s + j)->rank = tmp;
            }
        }
    }
}

void disp(ss *p)
{
    printf("num\tname\tkor\teng\ttotal\tavg\tgrade\trank\n");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%4d\t%s\t%3d\t%3d\t%3d\t%.2f\t%c\t%3d\n", (p + i)->hno, (p + i)->name, (p + i)->kor, (p + i)->eng, (p + i)->tot, (p + i)->avg, (p + i)->grade, (p + i)->rank);
    }
    printf("\n----------------------\n");
}