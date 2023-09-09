//  Factorial of a Given Number

// Header file
#include <stdio.h>
// Global declaration
unsigned long long int factorial(int n)
{
    return (n == 0) ? 1 : (n * factorial(n - 1));
}

// Main function
int main(void)
{
    int in, i;
    unsigned long long int fact;
    printf("Enter a number: ");
    scanf("%d", &in);
    fact = factorial(in);
    printf("The factorial of %d is %d.", in, fact);
}