/*Check whether the number is perfcet is not*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    if(num < 0)
    {
        num = -num;
    }
    for(int i=1;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
    {
        printf("Perfect number\n");
    }
    else
        printf("Not perfect number\n");
}