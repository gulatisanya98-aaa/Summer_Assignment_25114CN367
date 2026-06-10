#include<stdio.h>
int fact(int num);
int main()
{
    printf("%d",fact(4));
    return 0;
}
    int fact(int num)
    {
        int f=1;
        for(int i=1;i<=num;i++)
        {
            f=f*i;
        }
        return f;
    }