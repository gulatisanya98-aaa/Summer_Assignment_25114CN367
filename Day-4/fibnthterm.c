#include<stdio.h>
    int main()
    {
        int n,a,b,count=0;
        printf("Enter nth term");
        scanf("%d",&n);
        int fib(int n)
        {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return fib(n-2)+fib(n-1);
        }
        printf("%d",fib(n));
    return 0;
}