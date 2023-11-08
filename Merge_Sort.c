/*      Algorithm of Merge Sort
1. If the array contains 1 or fewer elements, it's already sorted; no further action is needed.
2. Divide the array into two roughly equal halves.
3. Recursively apply Merge Sort to the left and right halves separately.
4. Merge the sorted left and right halves into a single sorted array.
5. Return the sorted array.     */
//-------------------------------------------------------------------------------------------
// Merge Sort using recursion
#include <stdio.h>
#define MAX 100

// function diclaration
void merge_sort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);
void display_elements(int no, int arr[]);
void display_elements_descending(int no, int arr[]);

// main function
int main(void)
{
    int no, arr[MAX], i, mid;
    printf("Enter no of element:\t");
    scanf("%d", &no);
    printf("Enter elements:\t");
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, no - 1);
    display_elements(no, arr);
    display_elements_descending(no, arr);
}

void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void merge(int arr[], int low, int mid, int high)
{
    int i, j, k, n1, n2;
    n1 = mid - low + 1;
    n2 = high - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[low + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = low;

    while ((i < n1) && (j < n2))
    {
        if (L[i] < R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

// for displaying array (Ascending order)
void display_elements(int no, int arr[])
{
    int i;
    printf("Array elements after sorted using Merge Sort:\n");
    printf("Ascending order:\t");
    for (i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// for displaying array (Decending order)
void display_elements_descending(int no, int arr[])
{
    int i;
    printf("Descending order:\t");
    for (i = no - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}