#include <stdio.h>
//#include <panmae.h>
#define QTY_ARRSIZE 5
#define CHAR_SIZE 9
struct sale
{
    int unit_price; // 단가
    int unit_qty; // 제품 갯수
    int unit_total_price; // 해당 제품 가격    
    
    char code;
    char tcode;
    char product_name[CHAR_SIZE];
}; // 45 byte

typedef struct sale ss;

int total_qty;   // 제품 총 갯수
int total_price; // 전체 구매 금액

int main()
{
    char line[] = "--------------------------------------------\r\n";
    int qty_allsum, total_price_allsum;
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
            strcpy(s[i].product_name, "지우개");
            s[i].unit_price = 1200;
            break;
        case 'b':
            strcpy(s[i].product_name, "연필");
            s[i].unit_price = 900;
            break;
        case 'c':
            strcpy(s[i].product_name, "노트");
            s[i].unit_price = 2500;
            break;
        case 'd':
            strcpy(s[i].product_name, "샤프");
            s[i].unit_price = 4800;
            break;
        case 'e':
            strcpy(s[i].product_name, "크래파스");
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

    printf("Code\t\tProduct Name\t\tQCY\t\tPrice\t\tTotal\n");

    // all print
    for (int i = 0; i < QTY_ARRSIZE; i++)
    {
        printf("%c\t\t%s\t\t", s[i].code, s[i].product_name);
        if (s[i].code == 'e')
        {
            printf("%d\t\t%d\t\t%d\t\t", s[i].unit_price, s[i].unit_qty, s[i].unit_total_price);
        }
        else
        {
            printf("\t%d\t\t%d\t\t%d\t", s[i].unit_price, s[i].unit_qty, s[i].unit_total_price);
        }
        printf("\n\n");
    }
    printf("%s", line);
    printf("수량의 합 : %d 개\n", qty_allsum);
    printf("총 금액 합 : %d 원\n", total_price_allsum);
    printf("%s", line);
    return 0;
}
