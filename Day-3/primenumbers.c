#include<stdio.h>
int isPrime(int num);
    int main()
    {
        int start,end,c=0;
        printf("Enter the range");
        scanf("%d %d",&start,&end);
        for(int i=start;i<end;i++)
        {
            if(isPrime(i)==1)
            printf("%d",i);
            printf(" ");
        }
        return 0;
    }
int isPrime(int num)
{
    if(num<=1)
    return 0;
    else{
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    return 1;
    else
    return 0;
}
}