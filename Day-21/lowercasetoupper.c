#include<stdio.h>
int main()
{
    char st[]="hello";
    int i=0;
    while(st[i]!='\0')
    {
        st[i]=st[i]-32;
        i++;
    }
    printf(" %s",st);
    return 0;
}