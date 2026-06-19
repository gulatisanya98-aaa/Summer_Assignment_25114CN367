#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int diasum=0;;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j||i+j==2)
            diasum+=a[i][j];
        }
    }
    printf("%d ",diasum);
    return 0;
}