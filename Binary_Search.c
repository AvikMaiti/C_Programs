// Algorithm
//
// Binary(array, search_element, low, high)
// if low > high
//     return -1
// middle = (low + high) / 2
// else if array[mid] = search_element
//     return middle
// else if (array[mid] < search_element)
//     return Binary(array, search_element, low, mid)
// else if (array[mid] < search_element)
//     return Binary(array, search_element, mid + 1, high)
// --------------------------------------------------------------------------------------------------
// Insertion of an element in an array
#include <stdio.h>

// user defined function
int binary(int a[], int srch, int low, int high)
{
    // if index became greater than array length
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    // if element found return the position
    if (a[mid] == srch)
    {
        return mid + 1;
    }
    // recursion for compairing next element
    else if (a[mid] > srch)
        return binary(a, srch, low, mid);
    else if (a[mid] < srch)
        return binary(a, srch, mid + 1, high);
}

// main function
int main(void)
{
    int i, n, src, rtrn;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    // taking array elements from user
    printf("Enter elements of sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter searching elements: ");
    scanf("%d", &src);
    // callin user defined functoin
    rtrn = binary(arr, src, 0, n - 1);
    if (rtrn == -1)
        printf("Element not found");
    else
        printf("The element found in %d position.", rtrn);
}