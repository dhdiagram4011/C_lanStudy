#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
    double ary[5];
    double max; // 최대값을 저장할 변수
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size); //배열에 값을 대입
    max = find_max(ary, size); //배열의 최대값 반환

    return 0;
}

void input_ary(double *pa, int size)
{
    int i;

    printf("%d개의 실수 값 입력:", size);
    for (i=0; i<size; i++) // 사이즈의 값에 따라 반복 횟수가 결정됨
    {
        scanf("%lf", pa + i);
    }
}

double find_max(double *pa, int size)
{
    double max;
    int i;

    max = pa[0]; //첫번째 배열 요소의 값을 최대값을 설정
    for (i=0; i < size; i++)
    {
        if(pa[i] > max) max = pa[i];
    }
    return max; //최대값 반환
}