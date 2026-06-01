#include<stdio.h>
int fact(int n);
int main()
{
    int num,org,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        int r=num%10;
        sum+=fact(r);
        num=num/10;
    }
    if(sum==org)
    printf("Strong number");
    else
    printf("Not a Strong number");
    return 0;
}
    int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }