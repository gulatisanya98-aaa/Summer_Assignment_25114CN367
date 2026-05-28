#include<stdio.h>
int main()
{
     int num,org,r,rev=0;
    printf("Enter a number");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;

    }
    if(org==rev)
    printf("Palindrome number");
    else
    printf("Not a Palindrome number");
    return 0;
}