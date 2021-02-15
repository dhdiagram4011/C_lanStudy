#include <stdio.h>

int main(void)
{
    int a = 1; //1로 초기화
    
    while(a < 10) // 1 < 10 부터 시작함
    {
        a = a * 2; //10보다 작을때까지 계속 값을 대입
    }
    printf("a : %d\n" ,a);

    return 0;
}