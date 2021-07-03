#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../Header/panmae.h"

typedef struct sale ss;

int qty_allsum = 0, total_price_allsum = 0;
char line[] = "--------------------------------------------\r\n";
/*
int main()
{
    ss s[5];

    FILE *fin;
    FILE *fout;
    char file_buff[100];
    fin = fopen("./6/input.dat", "r");
    fout = fopen("./6/output.dat", "w");

    if (fin == NULL)
    {
        printf("Read FILE OPEN FAIL\n");    
        exit(0);
    }    
    else
    {
        printf("FILE OPEN COMPLETE\n");
    }
    
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        fscanf(fin, "%c %d", s[i].code, s[i].unit_qty);

        s[i].tcode = tolower(s[i].code);

        switch (s[i].tcode)
        {
        case 'a':
            strcpy(s[i].product_name, "Eraser");
            s[i].unit_price = 1200;
            break;
        case 'b':
            strcpy(s[i].product_name, "Pencil");
            s[i].unit_price = 900;
            break;
        case 'c':
            strcpy(s[i].product_name, "Note");
            s[i].unit_price = 2500;
            break;
        case 'd':
            strcpy(s[i].product_name, "Sharp");
            s[i].unit_price = 4800;
            break;
        case 'e':
            strcpy(s[i].product_name, "Crayon");
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
    for (int i = 0; i < QTY_ARRSIZE; i++)
    {
        fprintf(fout,"%c\t\t%s\t\t\t%d\t\t%d\t\t%d\n", s[i].code, s[i].product_name, s[i].unit_price, s[i].unit_qty, s[i].unit_total_price);
        printf("%c\t\t%s\t\t\t%d\t\t%d\t\t%d\n", s[i].code, s[i].product_name, s[i].unit_price, s[i].unit_qty, s[i].unit_total_price);
    }
    //disp(&s);
    printf("\n\n===========\n\n");
 
    fclose(fin);
    fclose(fout);
    

    return 0;
}
*/
int main()
{
    ss s[QTY_ARRSIZE];    
    int num1;
    FILE *fin = fopen("./6/input.dat", "r");
    for(int i = 0; i < QTY_ARRSIZE; i++)
    {
        fscanf(fin, "%c %d", &(s + i)->code, &(s + i)->unit_qty);
        printf("%c %d\n", (s + i)->code, (s + i)->unit_qty);
    }
    fclose(fin);    // 파일 포인터 닫기

    return 0;
}