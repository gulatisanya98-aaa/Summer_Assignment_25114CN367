#include<stdio.h>
int prime(int num);
int main()
{
    int p=prime(8);
    if(p>2)
    printf(" not a prime number");
    else
    printf(" prime");
    return 0;
}
    int prime(int num)
    {
        int c=0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
            c++;
        }
        return c;
    }