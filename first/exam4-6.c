#include <stdio.h>

int main(void)
{
    int a = 30;
    int res1, res2, res3;

    res1  = ( a > 10) && ( a < 20 );
    printf("%d\n", res1);

    res2 = ( a > 10) || ( a> 20);
    printf ("%d\n", res2);

    res3 = !(a >= 30);
    printf("%d\n", res3);

    return 0;
}

