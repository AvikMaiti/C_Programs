#include <stdio.h>
#include <string.h>
// #include <unistd.h>
#include <Windows.h>

int main(void)
{
    char str[50];
    printf("Enter a string : ");
    gets(str);
    int length = strlen(str), i, j, k;

    for (i = 0; i < length; i++)
    {
        for (j = 0; j <= str[i]; j++)
        {
            if ((j >= '0' && j <= '9') || (j >= 'A' && j <= 'Z') || (j >= 'a' && j <= 'z'))
            {
                for (k = 0; k < i; k++)
                {
                    printf("%c", str[k]);
                }
                printf("%c \n", j);
                // sleep(1);
                Sleep(100);
            }
        }
    }
}