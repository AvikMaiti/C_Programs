/*  hollow square star pattern
 * * * * *
 *       *
 *       *
 *       *
 * * * * *          */

#include <stdio.h>
int main(void)
{
    int n, i, j;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
