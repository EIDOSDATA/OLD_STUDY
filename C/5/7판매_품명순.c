#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 9
#define QTY_ARRSIZE 5

int main()
{
    // unit[][] >> 수량, 단가, 금액
    int unit[QTY_ARRSIZE][3];
    int qty_allsum, total_price_allsum;

    int int_tmp;

    char code[QTY_ARRSIZE], tcode, product_name[QTY_ARRSIZE][CHAR_SIZE];
    char line[] = "--------------------------------------------\r\n";

    char char_tmp[CHAR_SIZE];


    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        // input code
        printf("#%d code input : \t",i+1);
        fflush(stdin);
        code[i] = getchar();
        tcode = tolower(code[i]);

        // EXIT CODE
        if(code[i] == '\n')
        {
            printf("EXIT CODE\r\n");
            return 0;
        }

        // input Quantity
        printf("#%d Quantity input : \t", i+1);
        fflush(stdin);
        scanf("%d", &unit[i][0]);

        printf("%s",line);

        // data setting
        switch(tcode)
        {
        case 'a':
            strcpy(product_name[i],"지우개");
            unit[i][1] = 1200;
            break;
        case 'b':
            strcpy(product_name[i],"연필");
            unit[i][1] = 900;
            break;
        case 'c':
            strcpy(product_name[i],"노트");
            unit[i][1] = 2500;
            break;
        case 'd':
            strcpy(product_name[i],"샤프");
            unit[i][1] = 4800;
            break;
        case 'e':
            strcpy(product_name[i],"크래파스");
            unit[i][1] = 10200;
            break;
        }

        unit[i][2] = unit[i][0] * unit[i][1];

        qty_allsum += unit[i][0];
        total_price_allsum += unit[i][2];

        printf("code : %c\tProduct name : %s\r\n",code[i], product_name[i]);
        printf("Quantity : %d\tUnit Price : %d\tTotal Price : %d\r\n", unit[i][0], unit[i][1], unit[i][2]);
        printf("%s",line);
    }

    printf("Code\t\tProduct Name\t\tQCY\t\tPrice\t\tTotal\n");

    // all print
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        printf("%c\t\t%s\t\t",code[i], product_name[i]);
        if(code[i] == 'e')
        {
            for(int j = 0; j < 3; j++)
            {
                printf("%d\t\t", unit[i][j]);
            }
        }
        else
        {
            for(int j = 0; j < 3; j++)
            {
                printf("\t%d\t", unit[i][j]);
            }
        }
        printf("\n\n");
    }
    printf("%s",line);
    printf("수량의 합 : %d 개\n",qty_allsum);
    printf("총 금액 합 : %d 원\n",total_price_allsum);
    printf("%s",line);


    // 제품명으로 정렬
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        for(int j = i + 1; j < QTY_ARRSIZE; j++)
        {
            // strcmp(주소1, 주소2); 의 반
            if(strcmp(product_name[i], product_name[j]) > 0)
            {
                // 코드
                tcode = code[i];
                code[i] = code[j];
                code[j] = tcode;

                // 제품명
                strcpy(char_tmp, product_name[i]);
                strcpy(product_name[i], product_name[j]);
                strcpy(product_name[j] ,char_tmp);

                // 수량
                int_tmp = unit[i][0];
                unit[i][0] = unit[j][0];
                unit[j][0] = int_tmp;

                // 단가
                int_tmp = unit[i][1];
                unit[i][1] = unit[j][1];
                unit[j][1] = int_tmp;

                // 금액
                int_tmp = unit[i][2];
                unit[i][2] = unit[j][2];
                unit[j][2] = int_tmp;

            }
        } // end i for j
    } // end of for o

    printf("Code\t\tProduct Name\t\tQCY\t\tPrice\t\tTotal\n");

    // all print
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        printf("%c\t\t%s\t\t",code[i], product_name[i]);
        if(code[i] == 'e')
        {
            for(int j = 0; j < 3; j++)
            {
                printf("%d\t\t", unit[i][j]);
            }
        }
        else
        {
            for(int j = 0; j < 3; j++)
            {
                printf("\t%d\t", unit[i][j]);
            }
        }
        printf("\n\n");
    }



    return 0;
}
