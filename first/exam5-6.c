#include <stdio.h>

int main(void)
{
    int rank = 3, m = 0;

    switch(rank)
    {
        case 1: // 등수
            m = 300; // 상금
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default: // 1~ 3등이 아닌 경우 , 별도의 상수식을 쓰지 않고 생략할 수도 있음
            m = 10;
            break;
    }
        printf("m : %d\n", m);
        return 0;
}