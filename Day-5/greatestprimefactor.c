#include<stdio.h>
#include<stdbool.h>
bool isprime(int n);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=num;i>=2;i--)
    {
        if(num%i==0 && isprime(i)){
        printf("%d",i);
        break;
        }
    }
    return 0;
}
    bool isprime(int n)
    {
        int c=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            c++;
        }
        if(c==2)
        return true;
        else
        return false;
    }