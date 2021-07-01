#include <stdio.h>

int main()
{
    int month, days, input_cnt;

    while(1)
    {
        printf("input month : \t");
        input_cnt = scanf("%d",&month);

        if(input_cnt == 0)
            return 0;

        if(month < 1 || month >12)
        {
            printf("입력 오류입니다. 재 입력을 시도합니다.\r\n");
            continue;
        }

        switch(month > 0 || month < 13)
        {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;

        default :
            days = 31;
            break;
        }
        printf("%2d 월은 %d 일 까지입니다.",month, days);
    }



    return 0;
}
