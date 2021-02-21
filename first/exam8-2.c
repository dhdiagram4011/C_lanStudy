#include <stdio.h>

int main(void)
{
    int score[5]; //다섯과목의 성적을 입력할 int 형 배열 선언
    int i;
    int total = 0;
    double avg; // 평균을 저장할 변수 --> 실수형이므로 double 이용

    for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]); //각 배열의요소에 성적을 입력  [5] 이므로 0 ~ 4번까지 성적을 입력
    } 

    for(i=0; i<5; i++)
    {
        total += score[i];
    }
    avg = total / 5.0; //평균계산 --> 5개의 과목에 대한 점수이므로 5.0 입력

    for(i=0 ; i<5; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균: %.1f\n", avg);

    return 0;
}