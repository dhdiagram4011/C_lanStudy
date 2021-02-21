#include <stdio.h>

// 매개변수가 없는 함수

int get_num(void); //함수선언

int main(void)
{
    int result;

    result = get_num(); //get_num 함수선언
    printf("반환값 : %d\n", result); // 함수를 통하여 반환된 값 출력
    return 0;
}

int get_num(void) //void 를 넣어서 매개변수가 없을을 표시함 ()로 표현도 가능함
// void는 함수 정의나 선언에서 사용하며 호출할 때는 사용하지 않음
{
    int num;

    printf("양수입력 : ");
    scanf("%d", &num);

    return num;
}