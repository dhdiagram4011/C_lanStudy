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
    if (count == 3) return; // count가 3이되면 반환하고 종료함 //새로운 복사본을 실행함
    fruit(count +1); // 호출할적마다 1씩 증가시킨다
    printf("jam\n"); 
}

// 재귀호출함수는 경우에 따라 복잡한 반복문을 간단히 표현이 가능하다 코드를 읽기가 쉽지 않고 반복 호출되면서 메모리를 사용하므로 제한적으로 사용하는 것이 필요함