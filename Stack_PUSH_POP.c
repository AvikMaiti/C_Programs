#include <stdio.h>
#include <stdlib.h>

void menu_list();
void PUSH();
void POP();
void red();
void yellow();
void green();
void reset();
void Display();

int stack[10], limit = 10, top = -1, insert, menu;

void main()
{
    printf("\033[1;44m Stack by Avik Maiti \033[1;0m \n");
    menu_list();
}

void menu_list()
{
    printf("Please select operation:\n\t1. PUSH\n\t2. POP\n\t3. EXIT\nSelection: ");
    scanf("%d", &menu);
    if (menu == 1)
        PUSH();
    else if (menu == 2)
        POP();
    else if (menu == 3)
        exit(0);
    else
    {
        printf("Invalid selection !!!\n\n");
        menu_list();
    }
}

void PUSH()
{
    printf("Enter a element for PUSH: ");
    scanf("%d", &insert);
    if (top == limit - 1)
    {
        red();
        printf(" Stack Overflow !!! ");
        reset();
        printf("\n");
    }
    else
    {
        top += 1;
        stack[top] = insert;
        Display();
    }
    menu_list();
}

void POP()
{
    if (top < 0)
    {
        red();
        printf(" Stack Underflow !!! ");
        reset();
        printf("\n");
        top = -1;
    }
    else
    {
        stack[top] == 0;
        top -= 1;
        Display();
    }
    menu_list();
}

void red()
{
    printf("\033[1;41m");
}

void green()
{
    printf("\033[1;32m");
}

void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}

void Display()
{
    int i;
    if (top < 0)
    {
        yellow();
        printf("Stack Empty !!!");
        reset();
        printf("\n");
        return;
    }
    else if (top == limit - 1)
    {
        yellow();
        printf("Stack Full !!!");
        reset();
        printf("\n");
    }
    printf("Elements are:\n");
    green();
    printf("_ \t \t _\n");
    for (i = top; i > -1; i--)
        printf(" |\t%d\t|\n", stack[i]);
    printf(" ----------------\n");
    reset();
}