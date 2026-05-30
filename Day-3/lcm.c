#include<stdio.h>
int GCD(int l,int s)
{
    if(l%s==0)
    return s;
    else{
        return GCD(s,l%s);
    }
}
int LCM(int a,int b)
{
    return a*b/GCD(a,b);
}
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("The LCM of the numbers is= %d",LCM(a,b));
    return 0;
}