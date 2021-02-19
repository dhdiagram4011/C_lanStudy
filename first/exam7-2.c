#include <stdio.h>

int get_num(void); //함수선언

int main(void)
{
    int result;

    result = get_num(); //get_num 함수선언
    printf("반환값 : %d\n", result); // 함수를 통하여 반환된 값 출력
    return 0;
}

int get_num(void)
{
    int num;

    printf("양수입력 : ");
    scanf("%d", &num);

    return num;
}