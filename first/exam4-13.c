#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 12;

    printf("a & b : %d\n", a & b); //논리곱 연산자
    printf("a ^ b : %d\n", a ^ b); //배타적 논리합 연산자 : 둘다 참이거나 둘다 거짓이면 거짓, 하나는 참이고 하나는 거짓인 경우에만 참이됨
    printf("a | b : %d\n", a | b); //논리합 연산자
    printf("~a : %d\n", ~a); //부정 연산자
    printf("a << 1 : %d\n", a << 1); //이동 연산자
    printf("a >> 2 : %d\n", a >> 2); //이동 연산자

    return 0;

}