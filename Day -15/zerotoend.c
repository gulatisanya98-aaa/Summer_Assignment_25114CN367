#include<stdio.h>
int main()
{
    int arr[5]={7,0,9,0,2};
    int temp[5];
    int j=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            temp[j]=arr[i];
            j++;
        }
    }
    while(j<5)
    {
        temp[j]=0;
        j++;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",temp[i]);
    }
    return 0;
}