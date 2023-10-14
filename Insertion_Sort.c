// Algorithm
//
// 1. consider the first element to be sorted sub-array and rest all the elements are unsorted sub-array
// 2. pick next element and store in a variable and compare with the previous elements (Sorted Array) with the current value
// 3. until the sorted sub-array elements larger than the current value, shift the elements by one and repeat step 3
// 4. insert the value
// 5. repeat step 2, until list is sorted
// 6. Exit
//
// -------------------------------------------------------------------------------

// Insertion Sort using recursion
#include <stdio.h>

// function diclaration
void read_elements();
void insertion_sort();
void display_elements();
void display_elements_descending();

// golbal variable
int no, arr[100], i, partition = 1, idx, temp;

// main function
int main(void)
{
    read_elements();
    insertion_sort();
    display_elements();
    display_elements_descending();
}

// read array elements from user
void read_elements()
{
    printf("Enter no of element:\t");
    scanf("%d", &no);
    printf("Enter elements:\t");
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// main function for inserton sort
void insertion_sort()
{
    if (partition == no || no == 1)
        return;
    temp = arr[partition];
    idx = partition - 1;
    while (idx >= 0 && arr[idx] > temp)
    {
        arr[idx + 1] = arr[idx];
        idx--;
    }
    arr[idx + 1] = temp;
    partition++;
    insertion_sort();
}

// for displaying array (Ascending order)
void display_elements()
{
    printf("Array elements after sorted using Insertion Sort:\n");
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