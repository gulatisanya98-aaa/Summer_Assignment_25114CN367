#include<stdio.h>
int main()
{
    char st[]="hello";
    int vowel=0;
    int consonant=0;
    int i=0;
    while(st[i]!='\0')
    {
        char ch=st[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        vowel++;
        else
        consonant++;
        i++;
    }
    printf(" Vowels= %d Consonant= %d ",vowel,consonant);
    return 0;
}