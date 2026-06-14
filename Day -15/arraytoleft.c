#include<stdio.h>
int main()
{
    int arr[5]={2,6,8,1,3};
    int first=arr[0];
    for(int i=0;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[4]=first;
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}