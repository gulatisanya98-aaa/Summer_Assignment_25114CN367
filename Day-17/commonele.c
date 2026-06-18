#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};
    int n1=4;
    int n2=4;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(b[i]==a[j]){
                printf("%d ",b[i]);
                break;
            }
        }
    }
        return 0;
}