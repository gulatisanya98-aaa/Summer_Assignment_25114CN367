#include<stdio.h>
int max(int a,int b);
int main()
{
    printf("%d",max(4,6));
    return 0;
}
    int max(int a,int b)
    {
        if(a>b)
        return a;
        else
        return b;
    }