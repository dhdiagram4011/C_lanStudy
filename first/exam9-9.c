#include <stdio.h>

void swap(int x, int y);

int main(void)
{
    int a = 10, b = 20;

    swap(a,b); //a,b 의 값을 복사하여 x ,y 에 전달
    printf("a:%d, b:%d\n", a,b); // a=10, b=20

    return 0;
}

void swap(int x, int y) //인수 a,b 의 값을 x ,y 에 복사하여 저장 // a = 10 , b = 20
{
    int temp; // 교환값 임시 저장을 위한 변수 선언

    temp = x;
    x = y;
    y = temp;
}



