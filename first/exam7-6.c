#include <stdio.h>

// 3번 실행되는 재귀호출 함수
void fruit(int count); //함수선언

int main(void)
{
    fruit(1); //처음 호출하므로 1을 인수로 할당

    return 0;
}

void fruit(int count) //재귀호출 함수정의
{
    printf("apple\n");
    if (count == 3) return; // count가 3이되면 반환하고 종료함
    fruit(count +1); // 호출할적마다 1씩 증가시킨다 
}