#include<stdio.h>
int main()
{
    int arr[5]={1,4,6,9,5};
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
    printf("The second largest element is %d",arr[3]);
    return 0;
}