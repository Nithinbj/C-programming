/*Missing numbe*/
int missingNumber(int* nums, int numsSize) 
{
    int sum=0;
    int s_n = numsSize*(numsSize+1)/2;
    for(int i=0;i<numsSize;i++)
    {
        sum = sum + nums[i];
    }
    return s_n - sum;
    
}