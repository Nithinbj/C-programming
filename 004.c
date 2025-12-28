#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the row and column :");
    scanf("%d %d",&row,&column);
    int a[row][column];
    int i,j,sum=0;
    
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
            printf("%d\t",a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("Sum = %d\n",sum);

}