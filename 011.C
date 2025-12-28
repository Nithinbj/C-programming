/*FINDING THE LARGEST OF EACH ROW AND COLUMN*/
#include<stdio.h>
void input(int r,int c,int a[r][c]);
void display(int r,int c,int a[r][c]);
void large_r(int r,int c,int a[r][c]);
void large_c(int r,int c,int a[r][c]);
int main()
{
    int row,column;
    printf("Enter the number of rows and column:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    input(row,column,arr);
    display(row,column,arr);
    large_r(row,column,arr);
    large_c(row,column,arr);
    
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
void large_r(int r, int c, int a[r][c])
{
    for(int i = 0; i < r; i++)
    { 
        int l_r = a[i][0];  // Initialize with first element of row i
        
        for(int j = 1; j < c; j++)  // Start from j=1
        {
            if(a[i][j] > l_r)
            {
                l_r = a[i][j];
            }
        }
        printf("The largest in row %d is %d\n", i, l_r);
    }
}
void large_c(int r, int c, int a[r][c])
{
    for(int j = 0; j < c; j++)
    { 
        int l_c = a[0][j];  // Initialize with first element of column j
        
        for(int i = 1; i < r; i++)  // Start from i=1
        {
            if(a[i][j] > l_c)
            {
                l_c = a[i][j];
            }
        }
        printf("The largest in column %d is %d\n", j, l_c);
    }
}
