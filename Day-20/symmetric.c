#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int isSymmetric=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=b[i][j]){
                isSymmetric=0;
                 break;
            }
        }
    }
    if(isSymmetric)
    printf("Symmetric Matrix");
    else
    printf("Not a Symmtric Matrix");
    return 0;
}