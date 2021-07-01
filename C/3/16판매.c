#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 9

int main()
{
    int unit_price[5] = {1200,900,2500,4800,10200};
    int unit_price_select = -1, qty, total_price;
    int input_cnt;
    char line[] = "--------------------------------------------\r\n";
    char code, tcode, product_name[CHAR_SIZE];


    while(1)
    {
        // input code
        printf("code input : \t");
        fflush(stdin);
        code = getchar();
        tcode = tolower(code);

        // EXIT CODE
        if(code == '\n')
        {
            break;
        }

        // input Quantity
        printf("Quantity input : \t");
        fflush(stdin);
        scanf("%d", &qty);

        printf("%s",line);

        // data setting
        switch(tcode)
        {
        case 'a':
            strcpy(product_name,"지우개");
            unit_price_select = 0;
            break;
        case 'b':
            strcpy(product_name,"연필");
            unit_price_select = 1;
            break;
        case 'c':
            strcpy(product_name,"노트");
            unit_price_select = 2;
            break;
        case 'd':
            strcpy(product_name,"샤프");
            unit_price_select = 3;
            break;
        case 'e':
            strcpy(product_name,"크레파스");
            unit_price_select = 4;
            break;
        }


        total_price = unit_price[unit_price_select] * qty;

        printf("code : %c\tProduct name : %s\r\n",tcode, product_name);
        printf("Quantity : %d\tUnit Price : %d\tTotal Price : %d\r\n",qty, unit_price[unit_price_select], total_price);
        printf("%s",line);
    }
    printf("EXIT CODE\r\n");
    return 0;
}
