#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = {10,20,30,40,50};
    int ary2[7] = {10,20,30,40,50,60,70};

    print_ary(ary1, 5); //ary1 배열 출력, 갯수 전달
    printf("\n");
    //print_ary(ary2, sizeof(ary2)); //ary2 배열 출력, 갯수 전달 sizeof --> 배열 전체의 크기를 계산함
    print_ary(ary2, 7);

    return 0;
}

void print_ary(int *pa, int size) //배열명과 배열 요소의 갯수를 받는 매개변수 선언
{
    int i;

    for (i=0; i<size; i++) //사이즈의 값에 따라 반복횟수 결정
    {
        printf("%d", pa[i]);
    }
}

