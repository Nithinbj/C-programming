#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number:");
    scanf("%d",&row);
    for(int i= 1;i<=row;i++)
    {   
        for(int space=1;space<=row-i;space++)
        {  
            printf(" ");
            
        }
       for(int j=1;j<=i;j++)
       {
        printf("* ");
       }
       printf("\n");
    }
}