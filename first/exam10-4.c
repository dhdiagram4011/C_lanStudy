#include <stdio.h>

int main(void)
{
    int ary[5] = {10,20,30,40,50}; //0,1, 2, 3, 4
    int *pa = ary; //첫번째 배열 요소의 주소 - 10
    int *pb = pa + 3; //네번째 배열 요소의 주소 - 40

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa ++; //pa를 다음 배열 요소로 이동
    printf("pb - pa : %u\n", pb -pa); // 두 포인터의 뺄샘

    printf("앞에 있는 배열 요소의 값 출력: ");
    if ( pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0;
}