#include <stdio.h>

int main(void)
{
    double apple; //실수
    int banana; //정수
    int orange; //정수
    
    apple = 5.0 / 2.0;
    banana = 5 / 2;
    orange = 5 % 2;

    printf("apple: %.1f\n", apple); // 2.5
    printf("banana: %d\n", banana); //2
    printf("orange: %d\n", orange); //1

    return 0;
}