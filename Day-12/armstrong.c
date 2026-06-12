#include<stdio.h>
#include<math.h>
int armstrong(int num);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(armstrong(n))
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
    return 0;
}
int armstrong(int num)
{
    int c=0;
    int sum=0;
    int org=num;
    while(num>0)
    {
        num=num/10;
        c++;
    }
    int org1=org;
    while(org>0)
    {
        int r=org%10;
         sum=sum+(round)(pow(r,c));
         org=org/10; 
    }
    return (org1==sum);
}