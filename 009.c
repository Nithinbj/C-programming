#include<stdio.h>
#include<string.h>
int is_string_palindrome(char *str)
{
    int len = strlen(str);
    int start=0,end=len-1;
    while(start < end)
    {
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;

}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int res = is_string_palindrome(str);
    if(res)
    printf("palindrome\n");
    else
    printf("not palindrome\n");
    return 0;
}
