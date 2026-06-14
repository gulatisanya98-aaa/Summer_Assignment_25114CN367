#include<stdio.h>
int main()
{
    int c=0;
    int arr[5]={1,7,56,30,6};
    int target=56;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
        printf("Element found at index %d",i);
        c++;
        break;
        }
    }
    if(c==0)
    printf("Element not found");
    return 0;
}