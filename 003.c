/*2 pointer logic to find the sum when array is sorted*/
int has_pair_sum(int arr[], int size, int target)
{
    int start = 0,end = size-1,sum=0;
    while(start < end)
    {
        sum = arr[start] + arr[end];
        if(sum == target)
        {
            return 1;

        }
        else if(sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}
