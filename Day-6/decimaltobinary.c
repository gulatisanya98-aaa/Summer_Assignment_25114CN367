#include<stdio.h>
int main()
{
    int binary[32],decimal,i=0;
    printf("Enter a decimal number");
    scanf("%d",&decimal);
    while(decimal>0)
    {
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    printf("Binary ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
