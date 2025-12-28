/*TO PRINT THE SELECTED ROW AND COLUMN INT THE GIVEN 2D ARRAY*/
#include<stdio.h>
void input(int r,int c,int a[r][c]);
void display(int r,int c,int a[r][c]);
void print_r(int r,int c,int a[r][c],int d);
void print_c(int r,int c,int a[r][c],int d);
int main()
{
    int row,column;
    printf("Enter the number of rows and column:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    input(row,column,arr);
    display(row,column,arr);
    int r,c;
    printf("enter the row number to print:");
    scanf("%d",&r);
    printf("The elements of the entered row are :");
    print_r(row,column,arr,r);
    printf("enter the column number to print:");
    scanf("%d",&c);
    printf("The elements of the entered column are :");
    print_c(row,column,arr,c);


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
void print_r(int r,int c,int a[r][c],int d)
{
    for(int i=0; i <r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i == d)
            {
                printf("%d ",a[i][j]);
            }
           
        }

    }
     printf("\n");
}
void print_c(int r,int c,int a[r][c],int d)
{
    for(int i=0; i <r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(d == j)
            {
                printf("%d ",a[i][d]);
            }
           
        }

    }
     printf("\n");
}