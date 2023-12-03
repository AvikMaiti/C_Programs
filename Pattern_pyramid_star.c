//   pyramid star pattern
//        *
//      * * *
//    * * * * *
//  * * * * * * *

#include <stdio.h>
int main(void)
{
    int n, i, j;
    printf("Enter height: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < i + (i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}
