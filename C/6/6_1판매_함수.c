#include <stdio.h>
#include "../Header/panmae.h"

typedef struct sale ss;
void input(ss *s);
void name_sort(ss *s);
void disp(ss *s);

int qty_allsum = 0, total_price_allsum = 0;
char line[] = "--------------------------------------------\r\n";

int main()
{
    ss s[QTY_ARRSIZE];
    input(&s);
    disp(&s);
    name_sort(&s);
    disp(&s);
    return 0;
}

void input(ss *s)
{
    for (int i = 0; i < QTY_ARRSIZE; i++)
    {
        // input code
        printf("#%d code input : \t", i + 1);
        fflush(stdin);
        (s + i)->code = getchar();
        (s + i)->tcode = tolower((s + i)->code);

        // EXIT CODE
        if ((s + i)->code == '\n')
        {
            printf("EXIT CODE\r\n");
            return 0;
        }

        // input Quantity
        printf("#%d Quantity input : \t", i + 1);
        fflush(stdin);
        scanf("%d", &(s + i)->unit_qty);

        printf("%s", line);

        // data setting
        switch ((s + i)->tcode)
        {
        case 'a':
            strcpy((s + i)->product_name, "Eraser");
            (s + i)->unit_price = 1200;
            break;
        case 'b':
            strcpy((s + i)->product_name, "Pencil");
            (s + i)->unit_price = 900;
            break;
        case 'c':
            strcpy((s + i)->product_name, "Note");
            (s + i)->unit_price = 2500;
            break;
        case 'd':
            strcpy((s + i)->product_name, "Sharp");
            (s + i)->unit_price = 4800;
            break;
        case 'e':
            strcpy((s + i)->product_name, "Crayon");
            (s + i)->unit_price = 10200;
            break;
        }

        (s + i)->unit_total_price = (s + i)->unit_price * (s + i)->unit_qty;

        qty_allsum += (s + i)->unit_qty;
        total_price_allsum += (s + i)->unit_total_price;

        printf("code : %c\tProduct name : %s\r\n", (s + i)->tcode, (s + i)->product_name);
        printf("Quantity : %d\tUnit Price : %d\tTotal Price : %d\r\n", (s + i)->unit_qty, (s + i)->unit_price, (s + i)->unit_total_price);
        printf("%s", line);
    }
}

void name_sort(ss *s)
{
    char char_tmp[CHAR_SIZE];
    int int_tmp;
    // 제품명으로 정렬
    for (int i = 0; i < QTY_ARRSIZE; i++)
    {
        for (int j = i + 1; j < QTY_ARRSIZE; j++)
        {
            // strcmp(주소1, 주소2); 의 반
            if (strcmp((s + i)->product_name, (s + j)->product_name) > 0)
            {
                // 코드
                (s + i)->tcode = (s + i)->code;
                (s + i)->code = (s + j)->code;
                (s + j)->code = (s + i)->tcode;

                // 제품명
                strcpy(char_tmp, (s + i)->product_name);
                strcpy((s + i)->product_name, (s + j)->product_name);
                strcpy((s + j)->product_name, char_tmp);

                // 수량
                int_tmp = (s + i)->unit_qty;
                (s + i)->unit_qty = (s + j)->unit_qty;
                (s + j)->unit_qty = int_tmp;

                // 단가
                int_tmp = (s + i)->unit_price;
                (s + i)->unit_price = (s + j)->unit_price;
                (s + j)->unit_price = int_tmp;

                // 총 금액
                int_tmp = (s + i)->unit_total_price;
                (s + i)->unit_total_price = (s + j)->unit_total_price;
                (s + j)->unit_total_price = int_tmp;
            }
        } // end i for j
    }     // end of for i
    printf("%s", line);
    printf("NAME SORT COMPLETE\n");
}

void disp(ss *s)
{
    // all print
    printf("Code\t\tProduct Name\t\tQCY\t\tPrice\t\tTotal\n");
    for (int i = 0; i < QTY_ARRSIZE; i++)
    {
        printf("%c\t\t%s\t\t\t%d\t\t%d\t\t%d\n", s[i].code, s[i].product_name, s[i].unit_price, s[i].unit_qty, s[i].unit_total_price);
    }
    printf("%s", line);
    printf("QTY SUM : %d\n", qty_allsum);
    printf("TOTAL PRICE : %d\n", total_price_allsum);
    printf("%s", line);
}
