#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total; // 변수 선언 , 초기화
    double avg; // 평균값을 저장할 변수
    int *pa, *pb; //동시에 포인터를 선언함 --> int pa , pb > 일반변수로 인식
    int *pt = &total; //포인터 선언 , 초기화
    double *pg = &avg; //double 형 포인터 선언 및 초기화 , 6행의 값을 저장함

    pa = &a; //포인터 pa 에 a의 주소를 대입
    pb = &b; //포인터 pb 에 b의 주소를 대입

    *pt = *pa + *pb; //a와 b의 값을 더하여 total에 저장
    *pg = *pt / 2.0;

    printf("두 정수의 값: %d, %d\n", *pa, *pb);  // 10 ,15
    printf("두 정수의 합: %d\n", *pt); // 25
    printf("두 정수의 평균: %.1lf\n", *pg); // 12.5 25/2

    return 0;
}