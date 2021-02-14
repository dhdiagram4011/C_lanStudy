#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int res = 2;

    a += 20; //a 와 20을 더한 결과값을 다시 a 에 저장 :: 10 + 20 = 30
    res *= b + 10; //b 에 10을 더한 결과에 res를 곱하고 다시 res에 저장 

    printf("a = %d, b = %d\n", a,b);  // a = 30, b = 20
    printf("res = %d\n", res); // res = 60

    return 0;

    // 왼쪽에는 반드시 변수가 와야 한다.
}