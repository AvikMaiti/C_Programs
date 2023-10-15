/*      Algorithm
--------------------------------------------------------------------------------------
1.  if (partition == array_length)
        return;
2.  i = min = partition;
3.  while (i < array_length)
    {   if (array[minimum] > arr[i])
            then minmum = i;
        i++;
    }
4.  if (min != partition)
        swap(&arr[min], &arr[partition]);
5.  partition += 1;
6.  repeat step 1 until the array is not sorted
--------------------------------------------------------------------------------------      */
//
// Selection Sort using recursion
#include <stdio.h>

// function diclaration
void read_elements();
void selection();
void swap();
void display_elements();
void display_elements_descending();

// golbal variable
int no, arr[100], i, partition = 0, idx, min, temp;

// main function
int main(void)
{
    read_elements();
    selection();
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

void selection()
{
    if (partition == no)
        return;
    i = partition;
    min = partition;
    while (i < no)
    {
        if (arr[min] > arr[i])
            min = i;
        i++;
    }
    if (min != partition)
        swap(&arr[min], &arr[partition]);
    partition += 1;
    selection();
}

void swap(int *a, int *b)
{
    int str = *a;
    *a = *b;
    *b = str;
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