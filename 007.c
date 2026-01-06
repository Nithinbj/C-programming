/*RETURN THE INDEX WHERE THE ASCENDING IS NOT FOLLOWED*/
#include <stdio.h>

int find_break_index(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return i;   // first break found
    }
    return -1;          // no break, array sorted
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int index = find_break_index(arr, size);

    if (index == -1)
        printf("Array is sorted\n");
    else
        printf("Sorting breaks at index %d\n", index);

    return 0;
}
