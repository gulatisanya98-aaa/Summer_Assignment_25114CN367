#include<stdio.h>
int main()
{
    int arr[3];
    int e=0,o=0;
    printf("Enter elements");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]%2==0)
        e++;
        else
        o++;
    }
    printf("Even= %d \n",e);
    printf("Odd=%d",o);
    return 0;
}