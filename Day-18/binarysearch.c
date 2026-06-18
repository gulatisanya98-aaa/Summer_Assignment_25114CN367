#include<stdio.h>
int main()
{
    int arr[]={4,7,9,10};
    int n=4;
    int target=9;
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            printf(" Element found at index %d",mid);
            break;
        }
        else if(mid<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return 0;
}