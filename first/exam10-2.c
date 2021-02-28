#include <stdio.h>

int main(void)
{
    int ary[3]; //0 1 2
    int *pa = ary; // 포인터에 배열명 저장
    int i; // 반복제어변수

    *pa = 10; //첫번째 배열 요소에 10 대입 0 = 10
    *(pa + 1) = 20; //두번째 배열 요소에 20 대입 1 = 20 --> 괄호를 쓰면 포인터 연산식으로 변경됨
    pa[2] = pa[0] + pa[1]; //대괄호를 이용하여 pa를 배열명처럼 이용 10 + 20

    for (i=0; i<3; i++)
    {
        printf("%5d", pa[i]); // 10 20 30
    }

    return 0;
}


