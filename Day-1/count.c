#include<stdio.h>
int main()
{
    int num,c=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        c++;
    }
    printf("The number of digits is %d",c);
    return 0;
}