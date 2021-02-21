#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count; // 배열요소의 갯수를 저장할 변수
    
    count = sizeof(score) / sizeof(score[0]); // 배열요소의 갯수를 계산 -- 배열 전체의 크기를 byte 단위로 계산함
    printf("%d\n", count);

    for (i=0; i <count; i++) // 11 행에서 계산한 카운트 만큼 반복
    {
        scanf("%d", &score[i]);
    }
    for (i=0; i<count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count; // 총 합을 count로 나누어 평균계산

    for (i=0; i < count; i++) // 11행에서 계산한 카운트만큼 반복
    {
        printf("%5d", score[i]);
    }
        printf("\n");

        printf("평균 : %.1f\n", avg);

        return 0;
    }