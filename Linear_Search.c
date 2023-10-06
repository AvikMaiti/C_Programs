// Algorithm

// LinearSearch (array, search_element, array_length,index)
//     if index < 0
//         return -1
//     else if item = key
//         return index
//     else
//     return LinearSearch (array, search_element, array_length,index)
// ------------------------------------------------------------------------------------------
// Insertion of an element in an array
#include <stdio.h>

// user defined function
int linear(int a[], int srch, int length, int idx)
{
    // if index became greater than array length
    if (idx >= length)
        return -1;
    // if element found return the position
    else if (a[idx] == srch)
    {
        return idx + 1;
    }
    // recursion for compairing next element
    else
        return linear(a, srch, length, idx + 1);
}

// main function
int main(void)
{
    int i, n, src, rtrn;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    // taking array elements from user
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter searching elements: ");
    scanf("%d", &src);
    // callin user defined functoin
    rtrn = linear(arr, src, n, 0);
    if (rtrn == -1)
        printf("Element not found");
    else
        printf("The element found in %d index.", rtrn);
}