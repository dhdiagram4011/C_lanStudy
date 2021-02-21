#include <stdio.h>

void fruit(void); //함수선언

int main(void)
{
    fruit(); //위에서 선언한 fruit 함수를 호출함

    return 0;
}

void fruit(void) //재귀호출 함수정의
{
    printf("apple\n");
    fruit(); // 나 자신을 다시 호출
}
