#include <stdio.h>

int main(void)
{
    int a = 20, b =3;
    double res;

    res = ((double)a) / ((double)b); // 20.0  / 3.0
    printf("a = %d, b= %d\n" ,a,b); // 20, 3
    printf("a/b 의 결과 :  %.1lf\n", res); // 6.7

    a = (int)res; //20
    printf("(int) %.1f의 결과 : %d\n", res, a); // 20, 20.0

    return 0;
}