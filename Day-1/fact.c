#include<stdio.h>
int main()
{
    int num,f=1;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("The factorial is %d" ,f);
    return 0;
}