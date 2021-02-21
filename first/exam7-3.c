#include <stdio.h>

void print_char(char ch, int count); //함수선언

int main(void)
{
    print_char('@',5); //문자, 숫자 대입 후 함수 호출
    
    return 0;
}


void print_char(char ch, int count) //반환은 없음
{
    int i;

    for (i=0; i<count; i++)
    {
        printf("%c", ch);
    }
    return;
}