//   inverted pyramid star pattern
//
//  * * * * * * *
//    * * * * *
//      * * *
//        *

#include <stdio.h>
int main(void)
{
    int n, i, j;
    printf("Enter height: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < n - i + (n - i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}