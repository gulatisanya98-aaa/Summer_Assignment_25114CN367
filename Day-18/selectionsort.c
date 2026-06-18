#include<stdio.h>
int getmaxindex(int arr[],int start,int end);
void swap(int arr[],int first,int last);
int main()
{
    int arr[]={5,6,1,3,9};
    int n=5;
    for(int i=0;i<n;i++)
    {
        int last=n-i-1;
        int max=getmaxindex(arr,0,last);
        swap(arr,max,last);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
    int getmaxindex(int arr[],int start,int end)
    {
        int max=start;
        for(int i=start;i<=end;i++)
        {
            if(arr[max]<arr[i])
            max=i;
        }
        return max;
    }
    void swap(int arr[],int first,int last)
    {
        int temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
    }
    