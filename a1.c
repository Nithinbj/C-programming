#include<stdio.h>
int main()
{
    int num1,num2,num3,mid_num;
    printf("Enter the numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 > num2) // checking if num1 is greater to num2
    {
        if (num1 < num3) // checking if  num1 is smaller to num3
        {
            mid_num = num1;
        }
        else if (num3 < num2)
          mid_num = num2;
        else 
          mid_num = num3;
        
        
    }
    else 
          mid_num = num3;
     printf("Middle number is : %d\n",mid_num);
}