#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int j=0;j<3;j++)
    {
        int csum=0;
        for(int i=0;i<3;i++)
        {
            csum+=a[i][j];
        }
        printf("Sum of %d column is %d",j+1,csum);
        printf("\n");
    }
    return 0;
}