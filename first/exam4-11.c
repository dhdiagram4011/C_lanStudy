#include <stdio.h>

int main(void)
{
    int a = 10 , b = 20;
    int res;

    res = (++a, ++b); // 콤마 연산자는 대입연산자보다 우선순위가 낮다 (대입 연산자가 우선순위가 높음)
    // 위의 수식에서 괄호가 빠지면 ++a 연산자가 우선 수행됨

    printf("a:%d, b:%d\n", a, b); //10 , 20
    printf("res:%d\n", res); // 11, 21

    return 0;
}