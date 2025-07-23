#include<stdio.h>
int main()
{
    int row,count=1;
    scanf("%d",&row);
    for(int i=1;i <= row;i++)
    {
        for(int j=1;j<= row;j++)
        {                                                                                                                                                                                                                                                                                                                                                                                                                  
            printf("%d ",count++);
        }
        printf("\n");
    }
}