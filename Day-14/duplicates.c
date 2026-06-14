#include<stdio.h>
int main()
{
    int arr[5]={3,5,5,7,8};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]==arr[i-1])
        printf("%d",arr[i]);
    }
    return 0;
}
