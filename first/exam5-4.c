#include <stdio.h>

int main(void)
{
    int a = 20, b = 10;

    if (a > 10)
    {
        if ( b >= 0)
        {
            b = 1;
        }
        else
        {
            b = -1;
        }
    }
        printf("a : %d, b : %d\n", a , b);
        return 0; //a = 20, b = 1
}

/*
논리곱(&&) 연산의 경우 두 조건을 모두 만족하여야 하므로 a > 10 의 조건이 거짓이면 두 if 는 모두 거짓이 됨
*/