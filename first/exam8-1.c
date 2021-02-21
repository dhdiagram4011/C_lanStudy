#include <stdio.h>

int main(void)
{
    int ary[5]; // int 형 요소 5개의 배열 선언 //int 형 변수는 배열의 크기가 4byte , 
    
    ary[0] = 10; // 첫번째 배열 요소에 10을 대입
    ary[1] = 20;
    ary[2] = ary[0] + ary[1]; //첫번째 요소와 두번째 요소를 더하여 세번째 요소에 저장
    scanf("%d", &ary[3]);

    printf("%d\n", ary[2]);
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]); // 마지막 배열 요소는 쓰레기 값

    return 0;
}

/*
실행 결과값 : 
❯ ./exam8-1.out
50 
30
50
-343981112 --> 쓰레기값
*/

