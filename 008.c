#include<stdio.h>
void read(int,int,int arr[][100]);
void write(int ,int ,int arr[][100]);
void sort(int,int arr[]);
int main()
{
    int row,column;
    printf("Enter the row and column : ");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    read(row,column,arr);
    printf("Before printing: \n");
    write(row,column,arr);
    for(int i=0;i<row)
    printf("After sorting:\n");

}
void read(int r,int c,int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void write(int r,int c,int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void sort(int c,int arr)
{
    for(i=0;i<c;i++)
    {
        for(j=0;j<c-i-1;j++)
        {
            if(arr[i][j] >arr[i][j+1])
            {
                int temp = arr[i][j];
                arr[i][j] = arr[i][j+1];
                arr[i][j+1]=temp;
            }
        }
    }
    write(i)
}