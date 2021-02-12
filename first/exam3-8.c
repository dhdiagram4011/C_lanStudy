#include <stdio.h>

int main(void) //예약어 식별자
{
    int income = 0; // 소득액 초기화
    double tax; // 세금변수
    const double tax_rate = 0.12;  //세율초기화 - 선언과 동시에 초기화 
    //tax_rate = 0.15;
    income = 456; //소득액 저장
    tax = income * tax_rate; // 계산 : 소득액 * 세율
    printf("세금은 %.1lf 입니다\n" , tax);

    return 0;
}