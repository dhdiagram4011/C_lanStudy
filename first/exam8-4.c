#include <stdio.h>

int main(void)
{
    char str[80] = "applejam"; //문자열 초기화

    printf("최초 문자열: %s\n", str);
    printf("문자열 입력: ");
    scanf("%s" , str);
    printf("입력 후 문자열 : %s\n", str);

    return 0;

}

/*
apple 을 저장할 배열의 경우 반드시 최소 하나이상의 배열 공간을 남겨 두어야힘 --> null 공간 때문에
*/