#include <stdio.h>

// main function
void main()
{
    int n, i;
    printf("Enter no of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    // taking array elements from user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // display array elements
    printf("Array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}