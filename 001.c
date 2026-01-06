int even_sum(int num)
{
    int sum=0;
    if(num <0)
    {
        num = -num;
    }
    while(num)
    {
        int digit = num%10;
        if(digit%2 == 0)
        {
            sum+=digit;
        }
        num=num/10;
    }
    return sum;
}
/*counting the even digits*/
int even_count(int num)
{
    int count=0;
    if(num == 0)
    {
        return 1;
    }
    if(num <0)
    {
        num = -num;
    }
    while(num)
    {
        int digit = num%10;
        if(digit%2 == 0)
        {
            count++;
        }
        num=num/10;
    }
    return count;
}
/*Binary Search*/
int binary(int *arr,int n,int key)
{
    int start = 0,end = n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == key )
        {
            return mid;
        }
        else if(arr[mid] > key)
            end = mid-1;
        else
            start = mid+1;
    }
    return  -1;
}
/*frequency of array elements*/
void print_frequency(int arr[], int size)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        flag=0;
       int  count=1;
        for(int k=0;k<i;k++)
        {
            if(arr[i] == arr[k])
            {
              flag = 1;
              break;
            }
        }
        if(flag)
            continue;
        else
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            printf("%d count ---> %d",arr[i],count);
        }
        
    }
}
/*palindrome using the 2 pointer*/
int is_palindrome(char *str)
{
    int len = strlen(str);
    int start =0,end = len-1;
    while(start <= end)
    {
        if(str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

