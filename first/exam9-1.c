#include <stdio.h>

int main(void)
{
    int a; //각 자료형의 크기만큼 메모리에 저장공간이 할당
    double b;
    char c;       

    printf("int 형 변수의 주소 : %u\n", &a);
    printf("double 형 변수의 주소: %u\n",&b);
    printf("char형 변수의 주소: %u\n", &c);

    return 0;

}

