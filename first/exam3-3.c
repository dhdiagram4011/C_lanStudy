#include <stdio.h>

int main(void)
{
    short sh = 32767;
    int in = 214783647;
    long ln = 214783647;
    long long lln = 123451234512345;

    printf("short형 변수 출력 : %d\n", sh); // sh = short 
    printf("int형 변수 출력: %d\n", in); // in = int
    printf("long 형 변수출력: %ld\n", ln); // ln = long
    printf("long long 형 변수출력: %lld\n", lln); //%lld = longlongd
    printf("long long 형의 크기 : %d바이트\n", sizeof(long long));
    printf("short 형의 크기 : %d바이트\n", sizeof(short));
    printf("int 형의 크기: %d바이트\n", sizeof(int));
    printf("long 형의 크기: %d바이트\n", sizeof(long));
    //printf("str 형의 크기 : %d바이트\n", sizeof(str));    
    
    return 0;

}

/*
short 형은 int 형보다 크기가 작으므로 메모리를 적게 사용함 --> 연산 과정에서는 int 형으로 변환되므로 실행 속도가 느려짐
특별한 경우가 아니면 정수형은 int 사용
long 형은 큰 값을 저장시에 이용
int 형은 4바이트

short형 변수 출력 : 32767
int형 변수 출력: 214783647
long 형 변수출력: 214783647
long long 형 변수출력: 123451234512345
long long 형의 크기 : 8바이트
short 형의 크기 : 2바이트
int 형의 크기: 4바이트
long 형의 크기: 8바이트

*/