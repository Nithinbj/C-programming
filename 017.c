#include<stdio.h>
int main()
{
    int size;
    printf("enter the size ");
    scanf("%d",&size);  // Removed \n
    int arr[size];
    
    printf("enter %d elements:\n", size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Original array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    // Remove duplicates
    int newSize = size;
    for(int i=0; i<newSize; i++)
    {
        for(int j=i+1; j<newSize; j++)
        {
            if(arr[i] == arr[j])  // Found duplicate
            {
                // Shift elements left to remove duplicate
                for(int k=j; k<newSize-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                newSize--;  // Reduce size
                j--;  // Check same position again
            }
        }
    }
    
    printf("Array after removing duplicates: ");
    for(int i=0; i<newSize; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}