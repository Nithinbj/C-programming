#include<stdio.h>
int main()
{
    int  num,temp,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp = num;
    while(num)
    {
        rev = rev*10 + num % 10;
        num/=10;
    }
    if(temp == rev)
       printf("Palindrome\n");
    else
       printf("not a palindrome\n");
}