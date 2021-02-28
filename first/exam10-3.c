#include <stdio.h>

int main(void)
{
    int ary[3] = {10,20,30};
    int *pa = ary; //10
    int i;

    printf("배열의 값: ");
    for (i=0 ; i<3; i++) //0,1,2
    {
        printf("%d  ", *pa); //pa 가 가리키는 배열 요소 출력
        pa++;
    }
    return 0;
}
