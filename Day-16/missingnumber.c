#include <stdio.h>
void swap(int arr[],int first,int last)
{
    int temp=arr[first];
    arr[first]=arr[last];
    arr[last]=temp;
}
int main()
{
    int arr[]={3,0,1};
    int n=3;
    int i=0;
    while(i<n){
        int correct=arr[i];
        if(arr[i]<n && arr[i]!=arr[correct])
        swap(arr,i,correct);
        else
        i++;
    }
    for(int index=0;index<n;index++)
    {
        if(index!=arr[index])
        {
        printf("%d",index);
        return 0;
        }
    }
    printf("%d",n);
    return 0;
}