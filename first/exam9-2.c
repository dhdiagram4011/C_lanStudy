#include <stdio.h>

int main(void)
{
    int a; //일반 변수선언
    int *pa;   //포인터 선언

    pa = &a; //포인터에 a 의 주소를 대입
    *pa = 10; //포인터로 변수 a에 10 대입

    printf("포인터로 a 값 출력: %d\n", *pa);
    printf("변수명으로 a 값 출력: %d\n", a);

    return 0;
}