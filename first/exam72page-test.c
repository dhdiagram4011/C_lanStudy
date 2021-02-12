#include <stdio.h>

int main(void)
{
    const int kor = 70;
    const int eng = 80;
    const int mat = 90;

    const int tot = kor + eng + mat;
    printf("국어: %d\n, 영어:%d\n , 수학: %d\n", kor, eng, mat);
    // printf("영어: %d\n", eng);
    // printf("수학: %d\n", mat);
    printf("총점: %d\n", tot);

    return 0;
}