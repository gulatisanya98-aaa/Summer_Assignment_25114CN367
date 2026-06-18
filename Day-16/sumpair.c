#include<stdio.h>
int main()
{
    int arr[]={1,5,8,10,11};
    int n=5;
    int target=11;
    int left=0;
    int right=n-1;
    while(left<right)
    {
         int sum=arr[left]+arr[right];
        if(sum==target)
        {
            printf("%d %d",arr[left],arr[right]);
             return 0;
        }
        else if(sum<target)
        left++;
        else
        right--;
    }
    printf("No pair found");
    return 0;
}