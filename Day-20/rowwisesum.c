#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        int rsum=0;
        for(int j=0;j<3;j++)
        {
            rsum+=a[i][j];
        }
        printf("Sum of %d row is %d",i+1,rsum);
        printf("\n");
    }
    return 0;
}