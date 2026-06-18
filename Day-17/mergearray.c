#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int n1=3;
    int n2=3;
    int merged[n1+n2];
    for(int i=0;i<n1;i++)
    {
        merged[i]=a[i];
    }
    for(int i=0;i<n2;i++)
    {
        merged[n1+i]=b[i];
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",merged[i]);
    }
        return 0;
}