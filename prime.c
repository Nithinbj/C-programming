#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    for( int i =2;i*i <=num;i++)
    {
        if(num %i==0)
        {
            count++;
            break;
        }
    }if(!count)
    {
        printf("prime number\n");
    }
    else
        printf("not prime\n");     
}