#include<stdio.h>
#include<math.h>
int main()
{
    int num,org,org1,r,sum=0,c=0;
    printf("Enter a number");
    scanf("%d", &num);
    org=num;
    while(num>0)
    {
        num=num/10;
        c=c+1;
    }
    org1=org;
    while(org>0)
    {
        r=org%10;
        sum=sum+round(pow(r,c));
        org=org/10;
    }
    if(org1==sum)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
    return 0;
}