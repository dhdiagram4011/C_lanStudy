#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10; //ary[0] = 10
    *(ary + 1) = *(ary + 0) + 10; //ary[1] = ary[0] + 10
    printf("세번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary +2); //&ary[2] --> ary + 2 를 쓰면 연산 과정을 줄일 수 있음

    for (i=0; i<3; i++) //모든 배열 요소를 출력
    {
        printf("%5d", *(ary + i)); // ary[i]
    }

    return 0;
}