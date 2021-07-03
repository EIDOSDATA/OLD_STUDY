#include <stdio.h>
//#include <panmae.h>
#define QTY_ARRSIZE 5
#define CHAR_SIZE 9
struct sale
{
    int unit_price;       // 단가a
    int unit_qty;         // 제품 갯수
    int unit_total_price; // 해당 제품 가격

    char code;
    char tcode;
    char product_name[CHAR_SIZE];
}; // 45 byte

typedef struct sale ss;
//void input(ss *s);
void disp(ss *s);

int qty_allsum = 0, total_price_allsum = 0;
char line[] = "--------------------------------------------\r\n";

int main()
{
    ss s[QTY_ARRSIZE];
    for (int i = 0; i < QTY_ARRSIZE; i++)
    {
        // input code
        printf("#%d code input : \t", i + 1);
        fflush(stdin);
        s[i].code = getchar();
        s[i].tcode = tolower(s[i].code);

        // EXIT CODE
        if (s[i].code == '\n')
        {
            printf("EXIT CODE\r\n");
            return 0;
        }

        // input Quantity
        printf("#%d Quantity input : \t", i + 1);
        fflush(stdin);
        scanf("%d", &s[i].unit_qty);

        printf("%s", line);

        // data setting
        switch (s[i].tcode)
        {
        case 'a':
            strcpy(s[i].product_name, "Eraser");
            s[i].unit_price = 1200;
            break;
        case 'b':
            strcpy(s[i].product_name, "pencil");
            s[i].unit_price = 900;
            break;
        case 'c':
            strcpy(s[i].product_name, "note");
            s[i].unit_price = 2500;
            break;
        case 'd':
            strcpy(s[i].product_name, "sharp");
            s[i].unit_price = 4800;
            break;
        case 'e':
            strcpy(s[i].product_name, "crayon");
            s[i].unit_price = 10200;
            break;
        }

        s[i].unit_total_price = s[i].unit_price * s[i].unit_qty;

        qty_allsum += s[i].unit_qty;
        total_price_allsum += s[i].unit_total_price;

        printf("code : %c\tProduct name : %s\r\n", s[i].tcode, s[i].product_name);
        printf("Quantity : %d\tUnit Price : %d\tTotal Price : %d\r\n", s[i].unit_qty, s[i].unit_price, s[i].unit_total_price);
        printf("%s", line);
    }

    disp(&s);
    return 0;
}

void input(ss *s)
{

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
}
