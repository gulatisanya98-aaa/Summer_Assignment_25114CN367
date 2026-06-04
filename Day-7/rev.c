#include<stdio.h>
int rev(int n);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Reverse Number=%d",rev(num));
    return 0;
}
int R=0;
int rev(int n)
{
    if(n==0)
    return R;
    else
    {
        int r=n%10;
        R=R*10+r;
        return rev(n/10);
    }
}