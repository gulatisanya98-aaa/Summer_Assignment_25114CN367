#include<stdio.h>
#include<math.h>
int main()
{
    long binary;
    int decimal=0,i=0;
    printf("Enter a binary number");
    scanf("%ld",&binary);
    while(binary>0)
    {
        int r=binary%10;
        decimal+=r* pow(2,i);
        binary=binary/10;
        i++;
    }
    printf("Decimal ");
    printf("%d",decimal);
    return 0;
}