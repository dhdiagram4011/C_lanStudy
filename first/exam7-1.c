#include <stdio.h>

int sum(int x, int y); //반환형 함수명(매개변수1, 매개변수2) --> 2개의 값을 더하는 함수이므로 값을 2개를 선언함 int --> 함수가 기능을 수행한 후 호출한 곳으로 값을 돌려줄 값의 자료형

int main(void)
{
    int a= 10, b=20;//a 와 b 에 값을 선언

    int result; 

    result = sum(a,b); // a 와 b를 합함 --> 함수의 호출 a,b : 인수
    printf("result: %d\n," , result);

    return 0;
}


// 함수는 다른 함수 안에서 정의가 불가능하므로 별도의 구역에 지정함
// 정수를 반환하면 int형 공간 확보, 실수를 반환하면 double 형 공간 확보 
int sum(int x, int y)
{
    int temp;

    temp = x + y;

    return temp;
}


