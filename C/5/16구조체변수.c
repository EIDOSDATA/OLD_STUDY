#include <stdio.h>
#define ARR_SIZE 5
#define CHAR_SIZE 20
struct
{
    int hno;
    char name[CHAR_SIZE];
    int kor;
    int eng;
    int tot;
    float avg;
    char grade;
    int rank;
}score; // 45 byte

int main()
{
    struct score s;
    printf("%d", sizeof(s));




    return 0;
}
