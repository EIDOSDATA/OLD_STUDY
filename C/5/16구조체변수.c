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

int main()
{
    ss s = {1122, "asdf", 95, 100};
    s.tot = s.kor + s.eng;
    s.avg = (float)s.tot / 2.0f;

    printf("num\tname\tkor\teng\ttotal\tavg\tgrade\n");
    printf("%4d\t%s\t%3d\t%3d\t%3d\t%.2f\t%c\n", s.hno, s.name, s.kor, s.eng, s.tot, s.avg, s.grade);

    return 0;
}
