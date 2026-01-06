/**/
#include <stdio.h>

void move_zeros_to_end(int arr[], int n)
{
    int pos = 0;   

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            if (i != pos)
            {
                int temp = arr[i];
                arr[i] = arr[pos];
                arr[pos] = temp;
            }
            pos++;
        }
    }
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
   

    move_zeros_to_end(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
