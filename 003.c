#include<stdio.h>
void sum(int arr1[],int  arr2[],int size);
void read(int arr[],int size);
void print(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("enter elements in first array :");
    read(arr1,size);
    print(arr1,size);
    printf("\n");
    printf("enter elements in second array :");
    read(arr2,size);
    print(arr2,size);
    printf("\n");
    sum(arr1,arr2,size);
}
void read(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sum(int arr1[],int  arr2[],int size)
{
    int arr3[size];
    printf("sum of 2 array  are :");
    for(int i=0;i<size;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ",arr3[i]);
    }
    printf("\n");
}