#include<stdio.h>
#include<math.h>
int main()
{
    int num,start,end,org,org1,r,sum,c;
    printf("Enter a range");
    scanf("%d %d", &start,&end);
    for(int i=start;i<end;i++)
    {
    num=i;
    sum=0;
    c=0;
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
    printf("%d ",i);
}

    return 0;
}
