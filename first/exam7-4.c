#include <stdio.h>

void print_line(void); //함수선언 --> 매개변수가 없는 함수와 반환형이 없는 함수의 특징을 모두 포함함

int main(void)
{
    print_line(); 
    printf("학번    이름    전공    학점\n");
    print_line();

    return 0;
}

void print_line(void)
{
    int i;
    for(i=0; i<50; i++)
    {
        printf("-");
    }
    printf("\n");
}