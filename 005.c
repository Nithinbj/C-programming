#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the row and column :");
    scanf("%d %d",&row,&column);
    int a[row][column];
    int i,j;
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}