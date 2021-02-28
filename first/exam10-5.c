#include <stdio.h>

void print_ary(int *pa);

int main(void)
{
    int ary[5] = {10,20,30,40,50}; //ary 는 메인함수에서만 사용 가능함, 다른 함수가 가진 이름은 사용할 수 없음

    print_ary(ary); //배열명을 주고 함수 호출

    return 0;
}

void print_ary(int *pa)
{
    int i;

    for (i=0; i<5; i++)
    {
        printf("%d", pa[i]); //pa로 배열요소 표현식을 사용
    }
}