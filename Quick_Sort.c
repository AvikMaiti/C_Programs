/*      Algorithm of Quick Sort
1. If the range of elements to be sorted has one element or none, it's already sorted; no further action is needed.
2. Choose a pivot element (e.g., the last element in the range).
3. Partition the elements, placing those smaller than the pivot to its left and those larger to its right.
4. Recursively apply Quick Sort to the left and right partitions.
5. The array is now sorted.     */
//-------------------------------------------------------------------------------------------
// Quick Sort Implementation

#include <stdio.h>
#define MAX 100

// Function to perform Quick Sort
void quick(int a[], int low, int high);

// Function to partition the array
int partition(int a[], int low, int high);

// Function to swap two elements
void swap(int *a, int *b);

// Function to display array elements in ascending order
void display_elements(int no, int arr[]);

// Function to display array elements in descending order
void display_elements_descending(int no, int arr[]);

int main(void)
{
    int num_elements, i;
    int arr[MAX];

    // Input: Number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    // Input: Array elements
    printf("Enter elements:\t");
    for (i = 0; i < num_elements; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Quick Sort
    quick(arr, 0, num_elements - 1);

    // Display the sorted array elements
    display_elements(num_elements, arr);

    // Display the sorted array elements in descending order
    display_elements_descending(num_elements, arr);
}

// Quick Sort Algorithm
void quick(int a[], int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the partition index
        int partition_index = partition(a, low, high);

        // Recursively sort the left and right sub-arrays
        quick(a, low, partition_index - 1);
        quick(a, partition_index + 1, high);
    }
}

// Partition the array
int partition(int a[], int low, int high)
{
    // Choose the pivot element (here, it's the last element)
    int pivot = a[high];
    int i = low - 1;

    // Iterate through the elements and rearrange them based on the pivot
    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    // Place the pivot element in its correct position
    swap(&a[i + 1], &a[high]);

    return i + 1; // Return the partition index
}

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to display array elements in ascending order
void display_elements(int no, int arr[])
{
    int i;
    printf("Array elements after sorted using Quick Sort:\n");
    printf("Ascending order:\t");
    for (i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// Function to display array elements in descending order
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
