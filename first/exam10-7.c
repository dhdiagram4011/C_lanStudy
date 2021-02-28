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
    printf("배열의 최대값: %.1f\n", max);

    return 0;
}

void input_ary(double *pa, int size)
{
    int i;

    printf("%d개의 실수 값 입력:", size);
    for (i=0; i<size; i++) // 사이즈의 값에 따라 반복 횟수가 결정됨
    {
        scanf("%lf", pa + i); //각 배열 요소의 주소를 구하고 그 값을 그대로 scanf 함수에 사용함, pa의 값을 그대로 이용함
    }
}


double find_max(double *pa, int size) //가장 큰 값을 찾아서 반환하는 함수
{
    double max;
    int i;

    max = pa[0]; //첫번째 배열 요소의 값을 최대값을 설정
    for (i=0; i < size; i++)
    {
        if(pa[i] > max) max = pa[i]; //다른 배열의 요소와 max 의 값을 비교하여 가장 큰 값을 max 에 대입
    }
    return max; //최대값 반환
}