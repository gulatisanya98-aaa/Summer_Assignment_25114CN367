#include<stdio.h>
#include<string.h>
int main()
{
    char st[]="hello";
    int i=0;
    int j=strlen(st)-1;
    while(i<j)
    {
        char temp=st[i];
        st[i]=st[j];
        st[j]=temp;
        i++;
        j--;
    }
    printf("%s",st);
    return 0;
}