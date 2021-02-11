#include <stdio.h> 

int main(void)
{
    printf("%d\n", 10);
    printf("%lf\n", 3.4);
    printf("%.2lf\n", 3.45);
    printf("%.10lf\n", 3.4);

    printf("%d 와 %d 의 합은 %d 입니다.\n", 10, 20, 10 + 30);
    printf("%.1lf-%.1lf = %.1lf\n" , 3.4, 1.0, 3.4-1.0);

    return 0;
}