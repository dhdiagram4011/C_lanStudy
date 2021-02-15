#include <stdio.h>

int main(void)
{
    int a = 1;

    do
    {
        a = a * 2; //제일 먼저 실행 // 1,2,4,8
    } while( a < 10 ); // a의 값이 16이 되면 조건식은 거짓이므로 종료함
    printf("a: %d\n", a);

    return 0;
}