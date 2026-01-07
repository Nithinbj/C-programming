/*Fibonacci numbers upto given  range*/
#include<stdio.h>
int main()
{
    int num,first=0,second=1,next=1;
    printf("Enter the range:");
    scanf("%d",&num);
    printf("The fibonacci series is: ");
    while(next <= num)
    {
        printf("%d ",next);
        next = first + second;
        first = second;
        second = next;
        
    }
    printf("\n");
    return 0;
}

