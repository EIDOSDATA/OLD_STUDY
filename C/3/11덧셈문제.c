#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a, b, input_answer, answer;
    int answer_cnt, op;
    char p[5], opr;

    srand( time(NULL)); // 실행시간이 다르면 난수를 새로 생성한다.

    for(int i = 1; i <= 5; i++)
    {
        a = rand() % (99-10+1) + 10; // 10 <= 두자리수 난수
        b = rand() % (9-0+1) + 0; // 0 <= 1자리수 난수
        op = rand() % (4-1+1)+1;

        switch(op)
        {
        case 1:
            opr = '+';
            answer = a + b;
            break;
        case 2:
            opr = '-';
            answer = a - b;
            break;
        case 3:
            opr = '*';
            answer = a * b;
            break;
        case 4:
            if(b == 0)
            {
                b = b = rand() % (9-0+1) + 0; // 0 <= 1자리수 난수
                printf("\t b==0 다시 발생\n");
            }
            opr = '/';
            answer = a / b;
            break;
        }

        printf("%d >> %d %c %d = ?", i, a, opr, b);
        fflush(stdin);
        scanf("%d", &input_answer);

        if(answer == input_answer)
        {
            answer_cnt++;
            strcpy(p,"정답");
        }
        else
        {
            strcpy(p,"오답");
        }
        printf(">> %s \n", p);
    }
    printf("정답 수 : %d / 점수 %d", answer_cnt, answer_cnt*5);
    return 0;
}
