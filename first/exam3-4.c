#include <stdio.h>

int main(void)
{
    unsigned int a;

    a = 4294967295;
    printf("%d\n", a); 
    a = -1;
    printf("%u\n", a);

    return 0;
}





/*
unsigned 정수 : 나이와 같이 음수가 없는 데이터 저장시에 이용
%d = 부호까지 고려하여 10진수로 출력하는 변환문자
%u = 부호없는 10진수로 출력하는 변환문자
*/

