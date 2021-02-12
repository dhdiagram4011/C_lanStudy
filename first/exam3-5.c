#include <stdio.h>

int main(void)
{
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수의 값: %.20f\n", ft); // 소수점 이하 20자리까지 출력
    printf("double형 변수의 값: %.20lf\n", db);

    return 0;
}

// 정수형을 기본으로 사용하되 실수형은 필요한 경우만 사용
// 실수형은 저장하는 값에 따라 숫자가 정확하게 표현 될 수도 있고 아닐수도 있음 --> 컴퓨터에서 실수를 표현하는 방식이 오차를 가지고 있기 때문
