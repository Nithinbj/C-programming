/*SECOND LARGEST*/
#include <stdio.h>

int second_largest(int arr[], int n)
{
    if (n < 2)
        return -1;

    int first = arr[0];
    int second = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
        {
            second = arr[i];
        }
    }

    if (second == -1)
        return -1;

    return second;
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

    int result = second_largest(arr, size);

    if (result == -1)
        printf("No second largest element\n");
    else
        printf("Second largest element: %d\n", result);

    return 0;
}
