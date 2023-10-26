/*  hollow rectangle star pattern
 * * * * * * * * * * *
 *                   *
 *                   *
 *                   *
 * * * * * * * * * * *          */

#include <stdio.h>
int main(void)
{
    int h, w, i, j;
    printf("Enter height: ");
    scanf("%d", &h);
    printf("Enter width: ");
    scanf("%d", &w);
    printf("\n");
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
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