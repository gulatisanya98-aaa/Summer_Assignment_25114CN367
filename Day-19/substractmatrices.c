#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={9,1,3,2,3,4,2,8,5};
    int substract[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            substract[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",substract[i][j]);
        }
        printf("\n");
    }
    return 0;
}