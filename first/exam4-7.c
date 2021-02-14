#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;

    a + b;
    printf("%d + %d = %d\n", a, b, a+b); // 10, 20 , 30
    
    res =  a + b;
    printf("%d + %d = %d\n", a , b, res); // 10 ,20 , 30

    return 0;

}