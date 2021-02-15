#include <stdio.h>

int main(void)
{
    int i,j;

    for (i=0; i<8; i++) // 단
    {
        for(j=1; j<=9; j++)
        {
            //printf("2 * %d = %d\n", j, j*2);
            printf("%d * %d\n = %d\n", i,j,i*j);
        }
    }

}


// int main(void)
// {
//     int i,j;

//     for (i=0; i<3; i++) // 0,1,2
//     {
//         for(j=0; j<5; j++) //0,1,2,3,4
//         {
//             printf("*");
//         }
//     printf("\n");
//     }
//     return 0;
// }
