#include<stdio.h>
int main()
{
    int arr[8]={0,1,2,3,4,5,6,8};
    int s_n=8*(8+1)/2;
    int sum = 0;
    for(int i=0;i<8;i++)
    {
        sum = sum + arr[i];
    }
    printf("%d\n",s_n-sum);
}