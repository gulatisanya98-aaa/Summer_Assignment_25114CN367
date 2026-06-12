#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of the array");
    scanf("%d",&s);
    int arr[s];
    printf("Enter elements");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are");
    for(int i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}