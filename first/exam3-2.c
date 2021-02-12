#include <stdio.h>

int main(void)
{
    char ch1 = 'A';
    char ch2 = 65;
    printf("문자 %c 의 아스키코드값 : %d\n", ch1, ch1); //%c 를 사용하면 변수에 저장되어 있는 값을 아스키 값 코드로 해석하여 그 값에 해당하는 문자를 출력함
    printf("아스키 코드값이 %d 인 문자 : %c\n", ch2, ch2); // %d 는 정수로 출력함
 
    return 0;

}



