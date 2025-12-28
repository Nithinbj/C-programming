/*FIDING THE SUM OF 2 MATRIX*/
#include<stdio.h>
void input(int r,int c,int a[r][c]);
void display(int r,int c,int a[r][c]);
void sum(int r,int c,int a[r][c],int b[r][c]);
int main()
{
    int row,column;
    printf("Enter the number of row and column\n");
    scanf("%d%d",&row,&column); 
    int arr1[row][column],arr2[row][column];
    
    input(row,column,arr1);
    printf("The matrix 1 elemnts are:\n");
    display(row,column,arr1);
    
    input(row,column,arr2);
    printf("The matrix 2 elemnts are:\n");
    display(row,column,arr2);
    sum(row,column,arr1,arr2);

    
    
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
void sum(int r,int c,int a[r][c],int b[r][c])
{
    int add[r][c];
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of elemnts are:\n");
    display(r,c,add);
}
