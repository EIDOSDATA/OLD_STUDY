#include <stdio.h>
#define CHAR_LENGTH 5
int main()
{
    int number, input_cnt;
    char pan[CHAR_LENGTH];
    char line[] = "--------------------------------------------";
Re:
    printf("수를 입력해주세요 \t");
    fflush(stdin);
    input_cnt = scanf("%d",&number);

    printf("%s\r\n",line);

    printf("input_cnt : %d\r\n",input_cnt);

    if(number < 0 || input_cnt ==0)
    {
        printf("종료합니다.\r\n");
        return 0;
    }


    if(number%2 == 0)
        strcpy(pan,"짝수");
    else
        strcpy(pan,"홀수");

    printf("%d : %s\r\n\r\n", number, pan);

    goto Re;

    return 0;
}
