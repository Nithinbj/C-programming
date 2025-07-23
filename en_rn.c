#include<stdio.h>
int main()
{
    int range,i;
    printf("enter:");
    scanf("%d\n",&range);
    for(i=0; i<=range; i++)
    {
        printf("%d\n",i++);
    }
}