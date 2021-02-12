#include <stdio.h>

int main(void)
{
    char grade;
    char name[20]; //최대 19자의 문자열 입력 , 한글은 한 글자당 2바이트

    printf("학점입력: "); 
    scanf("%c", &grade);
    printf("이름입력: ");
    scanf("%s", name);
    printf("%s 의 학점은 %c 입니다.\n", name, grade);

    return 0;

}

// scanfs = 배열의 크기까지만 문자열을 입력하도록 제한해줌 -- 다른 컴파일러에서 지원해주지 않으면 코드에 문제 발생 가능성 있음