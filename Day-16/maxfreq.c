#include<stdio.h>
int main()
{
    int arr[]={2,4,5,7,5,5};
    int n=6;
    int maxfreq=0;
     int maxelement;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count ++;
        }
        if(maxfreq<count)
        {
            maxfreq=count;
            maxelement=arr[i];
        }
    }
    printf("%d",maxelement);
    return 0;
}