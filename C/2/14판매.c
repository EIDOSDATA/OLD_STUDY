#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 9

int main()
{
    int unit_price[5] = {1200,900,2500,4800,10200};
    int unit_price_select = -1, qty, total_price;
    int input_cnt;
    char line[] = "--------------------------------------------\r\n";
    char code, product_name[CHAR_SIZE];

Re_input:

    // input code
    printf("code input : \t");
    fflush(stdin);
    code = getchar();

    // EXIT CODE
    if(code == '\n')
    {
        printf("EXIT CODE\r\n");
        return 0;
    }

    // input Quantity
    printf("Quantity input : \t");
    fflush(stdin);
    scanf("%d", &qty);

    printf("%s",line);

    // data setting
    if(code == 'a' || code == 'A')
    {
        strcpy(product_name,"지우개");
        unit_price_select = 0;
    }
    else if(code == 'b' || code == 'B')
    {
        strcpy(product_name,"연필");
        unit_price_select = 1;
    }
    else if(code == 'c' || code == 'C')
    {
        strcpy(product_name,"노트");
        unit_price_select = 2;
    }
    else if(code == 'd' || code == 'D')
    {
        strcpy(product_name,"샤프");
        unit_price_select = 3;
    }
    else if(code == 'e' || code == 'E')
    {
        strcpy(product_name,"크레파스");
        unit_price_select = 4;
    }

    total_price = unit_price[unit_price_select] * qty;

    printf("code : %c\tProduct name : %s\r\n",code, product_name);
    printf("Quantity : %d\tUnit Price : %d\tTotal Price : %d\r\n",qty, unit_price[unit_price_select], total_price);
    printf("%s",line);

    goto Re_input;

    return 0;
}
