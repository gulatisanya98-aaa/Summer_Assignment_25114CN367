#include<stdio.h>
int main()
{
    int arr[3];
    printf("Enter elements");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0],small=arr[0];
    for(int i=0;i<3;i++)
    {
        if(large<arr[i])
        large=arr[i];
        if(small>arr[i])
        small=arr[i];
    }
    printf("Largest element= %d \n",large);
    printf("Smallest element=%d",small);
    return 0;
}