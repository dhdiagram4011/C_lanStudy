#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.4;

    printf("int 형 변수의 크기 : %d\n", sizeof(a));
    printf("double 형 변수의 크기: %d\n", sizeof(b));
    printf("정수형 상수의 크기: %d\n", sizeof(10));
    printf("수식의 결과값의 크기: %d\n", sizeof(1.5 + 3.4));
    printf("char 자료형의 크기: %d\n", sizeof(char));
    
    return 0;

    /*
    int 형 변수의 크기 : 4
    double 형 변수의 크기: 8
    정수형 상수의 크기: 4
    수식의 결과값의 크기: 8
    char 자료형의 크기: 1
    >>> 1byte 는 8bit
    */
}

