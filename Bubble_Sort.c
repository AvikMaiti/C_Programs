// Bubble Sort using recursion

// Insertion of an element in an array
#include <stdio.h>

// Swap two numbers
void swap(int *a, int *b)
{
    int store = *a;
    *a = *b;
    *b = store;
}

// find largest element by compairing every element
void check_element(int a[], int size, int idx)
{
    if (idx == size - 1)
        return;
    if (a[idx] > a[idx + 1])
        swap(&a[idx], &a[idx + 1]);
    check_element(a, size, idx + 1);
}

// user defined functon for bubble sort
void bubble(int a[], int length)
{
    if (length <= 1)
        return;
    check_element(a, length, 0);
    bubble(a, length - 1);
}

// main function
int main(void)
{
    int i, n;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    // takaing array elements from user
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble(arr, n);
    // printing sorted array
    printf("Array elements after sort using Bubble Sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}