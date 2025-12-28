#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the row and column:");
    scanf("%d %d",&row,&column);
    int a[row][column];
    int i,j,sr=0,sc=0;
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
    for(i=0;i<row;i++)
    {
        sr=0;
        sc=0;
        for(j=0;j<column;j++)
        {
            sr = sr + a[i][j];
            sc= sc + a[j][i];
        }
        printf("sr=%d and sc = %d ",sr,sc);
    }
}
