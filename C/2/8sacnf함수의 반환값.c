#include <stdio.h>
// scanf 함수는 입력에 성공한 변수의 갯수를 반환하는 성질이 있다.
// 앞에거 부터 차례대로 읽어 성공 여부에 따라 달라진다.
int main()
{
    int a,b, cnt;

    printf("input a,b\t");
    fflush(stdin);
    cnt = scanf("%d%d", &a, &b);

    printf("input complete count : %d\r\n",cnt);
    printf("a : %d\tb : %d\r\n",a, b);
    return 0;
}
