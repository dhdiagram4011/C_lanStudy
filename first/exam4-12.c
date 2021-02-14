#include <stdio.h>

int main(void)
{   
    int a = 10, b = 20 , res;
    res = (a > b) ? a : b; // 조건식이 참이면  a 선택, 조건식이 거짓이면 b 선택
    printf("큰값: %d\n", res);

    return 0;

}