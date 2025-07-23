#include<stdio.h>
int main()
{
    char ch='A';
    int row;
    printf("Enter the lines:");
    scanf("%d",&row);
    for(int i =row; i>=1;i--)
    {
        for(int j =1;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
       ch++;
    }
}