/*




*/
#include <iostream>
#include <cstring>
#include <time.h>
#define SI 20
using namespace std;

class Production
{
    char code;
    char product_name[SI];

    int unit_qty;         // 제품 갯수
    int unit_price;       // 단가a    
    int unit_total_price; // 해당 제품 가격
public:    
    Production(){};
    Production(const char _code, const char * _product_name, int _unit_qty, int _unit_price)    
    {
        code = _code;
        strcpy(product_name, _product_name);        
        unit_qty = _unit_qty;
        unit_price = _unit_price;        
        unit_total_price = _unit_qty * _unit_price;
    };
    void disp()
    {
        cout << "code\t\t:" << code << endl;
        cout << "product name\t\t: " << product_name << endl;
        cout << "unit qty\t\t: " << unit_qty << endl;
        cout << "unit price\t\t: " << unit_price << endl;
        cout << "unit total price\t: " << unit_total_price << endl;
    }

    ~Production(){};
};

int main()
{
    Production p('c', "Orange", 10, 980);
    p.disp();
    return 0;
}