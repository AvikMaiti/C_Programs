/*  square star pattern
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *   */

#include <stdio.h>
int main(void)
{
    int no, i, j;
    printf("Enter no of stars: ");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
            printf("* ");
        printf("\n");
    }
}
