#include <stdio.h>
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
void disp(ss s);

int main()
{
    ss s = {1122, "asdf", 95, 100};
    calc(&s);
    disp(s);
    printf("%d", sizeof(s));
    return 0;
}

void calc(ss *s)
{
    /*
    1. 연산 우선순위 : () > .(dot) > *
    >> (*s).member  O
    >> s->member    O
    >> *s.member    X

    */
    //s->tot = s->kor + s->eng;

    printf("*s Byte Size : %d\n\n", sizeof(s));
    (*s).tot = (*s).kor + (*s).eng;
    s->avg = (float)s->tot / 2.0f;

    switch ((int)s->avg / 10)
    {
    case 10:
    case 9:
        s->grade = 'A';
        break;
    case 8:
        s->grade = 'B';
        break;
    case 7:
        s->grade = 'C';
        break;
    case 6:
        s->grade = 'D';
        break;
    case 5:
        s->grade = 'E';
        break;
    default:
        s->grade = 'F';
        break;
    }
}

void disp(ss p)
{
    printf("num\tname\tkor\teng\ttotal\tavg\tgrade\n");
    printf("%4d\t%s\t%3d\t%3d\t%3d\t%.2f\t%c\n", p.hno, p.name, p.kor, p.eng, p.tot, p.avg, p.grade);
}
