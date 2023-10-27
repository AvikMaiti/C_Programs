//   mirrored rhombus star pattern
//
//        * * * *
//      * * * *
//    * * * *
//  * * * *

#include <stdio.h>
int main(void)
{
    int n, i, j;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}