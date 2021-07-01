#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 9
#define QTY_ARRSIZE 5

int main()
{
    int unit_price[QTY_ARRSIZE], qty[QTY_ARRSIZE];
    int total_price[QTY_ARRSIZE], qty_allsum, total_price_allsum;

    int int_tmp;

    char code[QTY_ARRSIZE], tcode[QTY_ARRSIZE], product_name[QTY_ARRSIZE][CHAR_SIZE];
    char line[] = "--------------------------------------------\r\n";

    char char_tmp[CHAR_SIZE];


    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        // input code
        printf("#%d code input : \t",i+1);
        fflush(stdin);
        code[i] = getchar();
        tcode[i] = tolower(code[i]);

        // EXIT CODE
        if(code[i] == '\n')
        {
            printf("EXIT CODE\r\n");
            return 0;
        }

        // input Quantity
        printf("#%d Quantity input : \t", i+1);
        fflush(stdin);
        scanf("%d", &qty[i]);

        printf("%s",line);

        // data setting
        switch(tcode[i])
        {
        case 'a':
            strcpy(product_name[i],"지우개");
            unit_price[i] = 1200;
            break;
        case 'b':
            strcpy(product_name[i],"연필");
            unit_price[i] = 900;
            break;
        case 'c':
            strcpy(product_name[i],"노트");
            unit_price[i] = 2500;
            break;
        case 'd':
            strcpy(product_name[i],"샤프");
            unit_price[i] = 4800;
            break;
        case 'e':
            strcpy(product_name[i],"크래파스");
            unit_price[i] = 10200;
            break;
        }

        total_price[i] = unit_price[i] * qty[i];

        qty_allsum += qty[i];
        total_price_allsum += total_price[i];

        printf("code : %c\tProduct name : %s\r\n",tcode[i], product_name[i]);
        printf("Quantity : %d\tUnit Price : %d\tTotal Price : %d\r\n", qty[i], unit_price[i], total_price[i]);
        printf("%s",line);
    }

    printf("Code\t\tProduct Name\t\tQCY\t\tPrice\t\tTotal\n");

    // all print
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        printf("%c\t\t%s\t\t%d\t\t%d\t\t%d\n",tcode[i], product_name[i], qty[i], unit_price[i], total_price[i]);
    }
    printf("%s",line);
    printf("수량의 합 : %d 개\n",qty_allsum);
    printf("총 금액 합 : %d 원\n",total_price_allsum);
    printf("%s",line);


    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        for(int j = i + 1; j < QTY_ARRSIZE; j++)
        {
            // strcmp(주소1, 주소2); 의 반
            if(strcmp(product_name[i], product_name[j]) > 0)
            {
                strcpy(char_tmp, product_name[i]);
                strcpy(product_name[i], product_name[j]);
                strcpy(product_name[j] ,char_tmp);
            }
        } // end i for j
    } // end of for o

    printf("Code\t\tProduct Name\t\tQCY\t\tPrice\t\tTotal\n");

    // all print
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        printf("%c\t\t%s\t\t%d\t\t%d\t\t%d\n",tcode[i], product_name[i], qty[i], unit_price[i], total_price[i]);
    }



    return 0;
}
