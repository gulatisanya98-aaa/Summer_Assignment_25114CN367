#include<stdio.h>
int isPalindrome(int num)
{
    int org=num;
    int rev=0;
    while(num>0)
    {
        int r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    return (org==rev);
}
int main()
{
    int num;
    scanf("%d", &num);
    if(isPalindrome(num))
    printf("Palindrome");
    else
    printf("Not a Palindrome");
    return 0;
}

