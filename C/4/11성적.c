#include <stdio.h>
#define ARRSIZE 10
int main()
{
    int i, kor[ARRSIZE], eng[ARRSIZE], tot[ARRSIZE];
    float avg[ARRSIZE];
    char grade[ARRSIZE];
    for(int i = 0; i < ARRSIZE; i++)
    {
        printf("#%d", i+1);
        printf("\t국어?");
        scanf("%d",&kor[i]);
        printf("\t영어?");
        scanf("%d",&eng[i]);
        tot[i] = kor[i] + eng[i];
        avg[i] = (float)tot[i] / 2;

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

    printf("\n\t*성적표*\n");
    printf("국어\t영어\t총점\n");

    for(int i = 0; i < ARRSIZE; i++)
    {
        printf("%3d\t%3d\t%3d\t%c\n", kor[i], eng[i], tot[i], grade[i]);

    }
    return 0;
}
