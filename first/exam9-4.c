#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    const int *pa = &a; //포인터 pa 는 변수 a 를 가리킴 --> pa가 가리키는 변수 a 는 pa 를 간접참조하여 바꿀 수 없다

    printf("변수 a의 값: %d\n", *pa); //10
    pa = &b; //포인터가 변수 b 를 가리키도록 함
    printf("변수 b의 값: %d\n", *pa); //포인터가 간접 참조하여 b 의 값을 출력 //20 
    pa = &a;
    a = 20;
    printf("변수 a의 값: %d\n", *pa); // 포인터로 간접 참조하여 바뀐값 출력 //20

    return 0;
}

/*
& = 주소연산자, 할당된 메모리의 위치 확인
* = 포인터로 가리키는 변수를 사용시 이용
*/