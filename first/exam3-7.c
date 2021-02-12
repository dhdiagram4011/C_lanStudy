#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 헤더파일 포함

int main(void)
{
    char fruit[20] = "Strawberry";

    printf("%s\n", fruit);
    strcpy(fruit, "banana"); //fruit 에 banana를 복사함
    printf("%s\n", fruit);

    return 0;
}

