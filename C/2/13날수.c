#include <stdio.h>

int main()
{
    int month, days, input_cnt;

Re_input:

    printf("input month\t");
    input_cnt = scanf("%d",&month);

    if(input_cnt == 0)
        return 0;
    if(month < 1 || month >12)
    {
        printf("입력 오류입니다. 재 입력을 시도합니다.\r\n");
        goto Re_input;
    }

    if(month ==2)
        days = 28;
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    printf("%2d 월은 %d 일 까지입니다.");




    return 0;
}
