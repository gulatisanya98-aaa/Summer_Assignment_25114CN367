#include<stdio.h>
int main()
{
    int c=0;
    int arr[5]={1,2,6,2,2};
    int target=2;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
            c++;
        }
    }
         printf("Element appears %d times",c);
    if(c==0)
    printf("Element not found");
    return 0;
}