// x ^ y / (5 * z) + 2
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// Function to determine the precedence of an operator
int Precedence(char ele)
{
    switch (ele)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

// Function to check if a character is an operator
int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int main(void)
{
    char in[MAX], stack[MAX] = "\0", result[MAX];
    int i, top = -1, res_idx = -1;

    // Input infix expression
    printf("Eq: ");
    fgets(in, MAX, stdin);
    printf("%d", strlen(in));
    printf("\n%-10s%-12s%-20s%s\n", "Sl.No.", "Input", "Stack", "Result");
    printf("----------------------------------------------------\n");

    // Process each character in the input expression
    for (i = 0; i < strlen(in); i++)
    {
        // Skip whitespace characters
        if (in[i] == ' ' || in[i] == '\t')
            continue;
        (i == strlen(in) - 1) ? printf("%-22d", i + 1) : printf("%-10d%-12c", i + 1, in[i]);

        // Operand: Append to the result
        if (isalnum(in[i]))
        {
            result[++res_idx] = in[i];
            result[res_idx + 1] = '\0';
        }
        // Left parenthesis: Push onto the stack
        else if (in[i] == '(')
        {
            stack[++top] = in[i];
            stack[top + 1] = '\0';
        }
        // Right parenthesis: Pop and append until '(' is encountered
        else if (in[i] == ')')
        {
            while (top > -1 && stack[top] != '(')
            {
                result[++res_idx] = stack[top];
                result[res_idx + 1] = '\0';
                stack[top--] = '\0';
            }
            // Pop the '(' from the stack
            stack[top--];
        }
        // Operator: Pop and append operators with higher or equal precedence
        else if (isOperator(in[i]))
        {
            while (top > -1 && Precedence(stack[top]) >= Precedence(in[i]))
            {
                result[++res_idx] = stack[top];
                result[res_idx + 1] = '\0';
                stack[top--] = '\0';
            }
            stack[++top] = in[i];
            stack[top + 1] = '\0';
        }
        printf("%-20s%s\n", stack, result);
    }

    // Process any remaining operators on the stack
    while (top >= 0)
    {
        if (stack[top] == '(')
        {
            printf("Invalid Expression");
            goto end;
        }
        result[++res_idx] = stack[top];
        result[res_idx + 1] = '\0';
        stack[top--] = '\0';
    }
    printf("----------------------------------------------------\n");
    // Output the final result
    printf("\n Postfix expression is: %s\n\n", result);

end:
    return 0;
}
