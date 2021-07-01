#include <stdio.h>
#define CHAR_LENGTH 5
int main()
{
    int number;
    char pan[CHAR_LENGTH];
    char line[] = "--------------------------------------------";
Re:
    printf("수를 입력해주세요 \t");fflush(stdin);
    scanf("%d",&number);

    printf("%s\r\n",line);

    if(number%2 == 0)
        strcpy(pan,"짝수");
    else
        strcpy(pan,"홀수");

    printf("%d : %s\r\n\r\n", number, pan);

    goto Re;

    return 0;
}
