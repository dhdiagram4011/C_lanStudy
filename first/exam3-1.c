#include <stdio.h>

int main(void)
{
    int a;
    int b,c; // 두개의 변수를 동시에 선언 // int a,b,c;
    double da;
    char ch;


// 저장공간 = 값
// l-value = r-value
    a =10;
    b = a;
    c = a+ 20;
    da = 3.5;
    ch = 'A';

    printf("변수 a 의 값 : %d\n" , a); //10
    printf("변수 b 의 값 : %d\n" , b); //10
    printf("변수 c 의 값 : %d\n" , c); //30
    printf("변수 da 의 값 : %.1fn\n", da); //3.5
    printf("변수 ch 의 값 : %c\n" , ch); //A

    return 0;
}

