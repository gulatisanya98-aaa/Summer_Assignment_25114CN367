#include<stdio.h>
int main()
{
    int num,r,p=1;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        p=p*r;
        num=num/10;
    }
    printf("The prouct of digits is=%d",p);
    return 0;
}