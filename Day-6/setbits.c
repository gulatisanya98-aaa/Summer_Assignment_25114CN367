#include<stdio.h>
int countbits(int n);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Number of set bits= %d",countbits(num));
    return 0;
}
int countbits(int n)
{
    int count=0;
    while(n>0)
    {
        count+=n&1;
        n=n>>1;
    }
    return count;
}