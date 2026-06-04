#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Fcatorial %d ",fact(num));
    return 0;
}
    int fact(int n)
    {
        if(n==1)
        return 1;
        else
        return n*fact(n-1);
    }