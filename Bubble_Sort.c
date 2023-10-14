// Algorithm
//
// bubble_sort(array[n])
//      if n == 0, return
//      for all the element of the array upto n
//      if array[i]>array[i+1]
//          swap two element
//      bubble_sort(array[n-1])
//
// -------------------------------------------------------------------------
// Bubble Sort using recursion
#include <stdio.h>

// function diclaration
void read_elements();
void bubble_sort();
void check_element();
void swap();
void display_elements();
void display_elements_descending();

// golbal variable
int no, arr[100], chk_upto, i, idx;

// main function
int main(void)
{
    read_elements();
    bubble_sort();
    display_elements();
    display_elements_descending();
}

// read array elements from user
void read_elements()
{
    printf("Enter no of element:\t");
    scanf("%d", &no);
    chk_upto = no;
    printf("Enter elements:\t");
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// main function for inserton sort
void bubble_sort()
{
    if (chk_upto == 0)
        return;
    check_element(0);
    chk_upto--;
    bubble_sort();
}

// find largest element by compairing every element
void check_element(int idx)
{
    if (idx == chk_upto - 1)
        return;
    if (arr[idx] > arr[idx + 1])
        swap(&arr[idx], &arr[idx + 1]);
    check_element(idx + 1);
}

// Swap two numbers
void swap(int *a, int *b)
{
    int store = *a;
    *a = *b;
    *b = store;
}

// for displaying array (Ascending order)
void display_elements()
{
    printf("Array elements after sorted using Bubble Sort:\n");
    printf("Ascending order:\t");
    for (i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// for displaying array (Decending order)
void display_elements_descending()
{
    printf("Descending order:\t");
    for (i = no - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}