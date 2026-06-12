#include<stdio.h>
int main()
{
    int arr[3];
    int sum=0,avg=0;
    printf("Enter elements");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        sum+=arr[i];
        avg=sum/3;
    }
    printf("Sum= %d \n",sum);
    printf("Average= %d",avg);
    return 0;
}