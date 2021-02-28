#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b); // a,b 의 주소를 인수로 주고 함수 호출  --> swap 함수를 통하여 두 변수의 값을 변경함
    printf("a :%d, b:%d\n", a,b); // 변수 a,b 출력 10, 20

    return 0;
}

void swap(int *pa, int *pb) //매게변수를 포인터로 선언
{
    int temp; // 교환을 위한 임시 변수
    temp = *pa; //temp가 pa가 가리키는 변수의 값 저장  //10? a = 10 , b = 20
    *pa = *pb; //pa 가 가리키는 변수에 pb 가 가리키는 변수의 값 저장 //20? a = 20
    *pb = temp; //pb 가 가리키는 변수에 temp의 값 저장 //20? b = 10
}