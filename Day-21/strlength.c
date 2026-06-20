#include<stdio.h>
int main()
{
    char st[]="madam";
    int len=0;
    while(st[len]!='\0')
    {
        len++;
    }
    printf("%d",len);
    return 0;
}