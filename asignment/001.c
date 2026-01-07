/*Second largest from the given three numbers*/
#include<stdio.h>
int sec_largest(int,int,int );
int main()
{
    int num1,num2,num3,sec_large;
    scanf("%d%d%d",&num1,&num2,&num3);
    sec_large=sec_largest(num1,num2,num3);
    printf("Second largest = %d\n",sec_large);
    return 0;
}
int sec_largest(int a,int b,int c)
{
    if(a > b)
    {
        if(b > c)
            return b;
        else
        {
            if( a < c)
                return a;
            else
                return c;
        }
    }
    else
    {
       if(b < c)
            return b;
        else
        {
            if(a < c)
                return c;
            else
                return a;

        }
    }
}