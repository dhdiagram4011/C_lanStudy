#include <stdio.h>

int main(void)
{
    int a = 10 , b = 20 , c = 10;
    int res; // 결과값 저장
    
    // 결과값 출력 : 0 = false,  1 = true -- 둘중 하나만 만족해도 참
    res = (a > b);
    printf("a > b : %d\n", res); // 0

    res = (a >= b);
    printf("a >= b : %d\n", res); // 0

    res = (a < b);
    printf("a < b : %d\n", res); // 1

    res = (a <= b);
    printf("a <= b : %d\n", res); // 1

    res = (a <= c);
    printf("a <= c: %d\n", res); // 1 

    res = ( a == b );
    printf("a == b: %d\n", res); // 0 

    res = ( a != c);
    printf("a != c : %d\n", res); // 0

    return 0;
}