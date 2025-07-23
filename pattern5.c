#include<stdio.h>
int main()
{
    int row,i,j,space;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for (i=row;i<=row;i++)
    {
        for(space =1;space <=row-1;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            
        }printf("\n");
    }
}
