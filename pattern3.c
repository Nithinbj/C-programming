#include<stdio.h>
int main()
{
    int row,count=1;
    printf("Enter the lines:");
    scanf("%d",&row);
    for(int i =row; i>=1;i--)
    {
        for(int j =1;j<=i;j++)
        {
            printf("%d",count);
        }
        printf("\n");
        count++;
    }
}