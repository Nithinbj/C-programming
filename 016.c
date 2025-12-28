/*FINDING THE LARGEST ELEMENT OF THE 2D ARRAY*/
#include<stdio.h>
void input(int r,int c,int a[r][c]);
void display(int r,int c,int a[r][c])
int main()
{
    int row,column;
    printf("Enter the number of rows and column:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    input(row,column,arr);
    display(row,column,arr);
    printf("the largest element is %d\n",large(row,column,arr));
}
void input(int r,int c,int a[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int r,int c,int a[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
