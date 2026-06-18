#include<stdio.h>
int main()
{
    int arr[]={1,2,2,3};
    int n=4;
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]!=arr[j])
        i++;
        arr[i]=arr[j];
    }
    int unique=i+1;
    for(int i=0;i<unique;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
    