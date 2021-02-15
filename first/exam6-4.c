#include <stdio.h>

int main(void)
{
    int i,j;

    for (i=0; i<3; i++) // 0,1,2
    {
        for(j=0; j<5; j++) //0,1,2,3,4
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}

