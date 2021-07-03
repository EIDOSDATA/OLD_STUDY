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