#include<stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Sum of digits=%d",sum(num));
    return 0;
}
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n%10+sum(n/10);
}