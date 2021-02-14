#include <stdio.h>

int main(void)
{
    int a = 10, b = 5;
    int res;

    // 연산의 순서 : 단항 > 이항 > 삼항
    // 관계 연산자는 논리 연산자보다 우선 실행됨

    res = a / b * 2; 
    printf("res = %d\n", res);

    res = ++a * 3; // 11 * 3 = 33
    printf("res = %d\n", res);

    res = a > b && a != 5; // 참 && 참 = 참 // 두개가 참이면 모두 참 , 1 
    printf("res = %d\n", res);

    res = a % 3  == 0; // 거짓 0
    printf("res = %d\n", res);

    return 0;
}