#include<stdio.h>
int even(int arr[],int  size);
int odd(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    int arr[size];
    for(int i =0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entered array elements are : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    even(arr,size);
    odd(arr,size);
}
int even(int arr[],int  size)
{
    int e_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2 == 0)
        {
            e_count++;
        }
    }
    printf("%d\n",e_count);
}
int odd(int arr[],int  size)
{
    int o_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2)
        {
            o_count++;
        }
    }
    printf("%d\n",o_count);
}