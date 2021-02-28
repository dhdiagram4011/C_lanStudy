#include <stdio.h>

int main(void)
{
    int a = 10; //변수 선언과 초기화
    int *p = &a; //포인터 선언과 동시에 a를 가리키도록 초기화
    double *pd; //double 형 변수를 가리키는 포인터

    pd = p; // 포인터 p 값을 포인터 pd 에 대입
    printf("%lf\n", *pd); //pd가 가리키는 변수 값 출력

    return 0;
}

