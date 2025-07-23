#include<stdio.h>
int main()
{
    int range,i;
    scanf("%d",&range);
    for(i=1;i<range;i+=2)
    {
        printf("%d\n",i);
    }
}