#include<stdio.h>
void sumavg(int arr[], int size);
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    sumavg(arr,size);

}
void sumavg(int arr[], int size)
{
    int sum = 0;
    float avg;
    for(int  i = 0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    printf("sum = %d and avg = %g",sum,(float)sum/size);
}

