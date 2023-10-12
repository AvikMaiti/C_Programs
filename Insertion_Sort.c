#include <stdio.h>
// function diclaration
void read_elements();
void insertion_sort();
void display_elements();
void compare();
// golbal variable
int no, arr[100], i, partition = 1, idx, temp;

// main function
int main(void)
{
    read_elements();
    insertion_sort();
    display_elements();
}

// read array elements from user
void read_elements()
{
    printf("Enter no of element:\t");
    scanf("%d", &no);
    printf("Enter element:\t");
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
    compare();
}

// for comparing elements and sort one by one
void compare()
{
    if (partition >= no)
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
    compare();
}

// for displaying array
void display_elements()
{
    printf("Array elements after sorted using Insertion Sort:\n\n");
    for (i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}