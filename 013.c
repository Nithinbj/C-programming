#include<stdio.h>
void input(int r,int c,int a[r][c]);
void display(int r,int c,int a[r][c]);
int sum_dia(int r,int c ,int a[r][c]);
int main()
{
    int row,column;
    printf("Enter the number of row and column\n");
    scanf("%d%d",&row,&column); 
    int arr[row][column];
    input(row,column,arr);
    display(row,column,arr);
    if(row == column)
    {
        int dia_sum =sum_dia(row,column,arr);
        printf("Sum of diagonal elements is %d\n",dia_sum);
    }
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
int sum_dia(int r,int c ,int a[r][c])
{
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i == j || i+j == r-1)
            {
                sum = sum +a[i][j];
            }
        }
    }
    return sum;
}
