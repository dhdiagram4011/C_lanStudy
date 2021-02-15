#include <stdio.h>

int main(void)
{
    //printf("hello world!\n");
    // int age = 12;
    // printf("%d\n", age);
    // age = 13;
    // printf("%d\n", age);
    // return 0;

    // // 실수형 변수
    // float f  = 46.5f;
    // printf("%.1f", f);
    // double d = 4.428;
    // printf("%.2lf\n", d);

    // const int YEAR = 2000;
    // printf("태어난년도: %d\n", YEAR);
    
    // int add = 3+7;
    // printf("%d\n", add);
    // printf("%d + %d = %d\n", 3 , 7, 3+7);
    // return 0;

    // int input;
    // printf("값을 입력하세요: ");
    // scanf("%d", &input);
    // printf("입력값: %d\n", input);


    // char c = 'A';
    // printf("%c\n", c);

    // char str[256];
    // scanf("%s", str, sizeof(str)); //256 개 이내의 문자열만 받겠다
    // printf("%s\n", str);
    // 경찰관이 범죄자의 정보를 입수(조서 작성)
    // 이름, 나이 , 몸무게, 키 , 범죄명

    char name[256];
    printf("이름: ");
    scanf("%s", name);

    int age;
    printf("나이: ");
    scanf("%d", &age);
    
    float weight;
    printf("몸무게: ");
    scanf("%f", &weight);

    float height;
    printf("키: ");
    scanf("%f", &height);
    
    char title[256];
    printf("범죄명: ");
    scanf("%s", title);

    printf("%s, %d, %.2f, %.2f, %s", name, age, weight, height, title);

        return 0;
}

