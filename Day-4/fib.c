#include<stdio.h>
int main()
{
    int a,b,count=0,n;
    printf("Enter how many terms you want to generate");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d",a);
    printf(" ");
    printf("%d",b);
    count=2;
    while(count<n)
    {
        int temp=b;
        b=a+b;
        a=temp;
        printf(" ");
        printf("%d",b);
        printf(" ");
        count++;
    }
    return 0;
}