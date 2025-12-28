#include<stdio.h>
void input(int r,int c,int a[r][c]);
void display(int r,int c,int a[r][c]);
void diagonal(int r, int c,int a[r][c]);
int main()
{
    int row,column;
    printf("Enter the number of row and column\n");
    scanf("%d%d",&row,&column); 
    if(row !=column)
    {
         printf("Both row and column shoul be equal\n");
          main();

    }

   
    int arr[row][column];
    printf("Enter the array elements:");
    input(row,column,arr);
    printf("The entered array elements are:\n");
    display(row,column,arr);
    printf("The diagonal elements are:\n");
    diagonal(row,column,arr);
    return 0;

    
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
void diagonal(int r, int c,int a[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j || (i+j) == r-1)
            {
                printf("%d",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}