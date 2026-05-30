#include<stdio.h>
int GCD(int l,int s)
{
    if(l%s==0)
    return s;
    else{
        return GCD(s,l%s);
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("The GCD of the numbers is= %d",GCD(a,b));
    return 0;
}