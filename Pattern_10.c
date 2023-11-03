//   hollow pyramid star pattern
//        *
//      *   *
//    *       *
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
            if (j == 0 || j == i + (i - 2) || i == n - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}