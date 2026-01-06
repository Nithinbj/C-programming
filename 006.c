/*TO CHECK WHETHER THE ARRAY IS SORTED IS OR NOT*/
#include <stdio.h>

int is_sorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;   
    }
    return 1;           
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


    if (is_sorted(arr, size))
        printf("Array is sorted\n");
    else
        printf("Array is not sorted\n");

    return 0;
}
