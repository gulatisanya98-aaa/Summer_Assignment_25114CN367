#include<stdio.h>
int main()
{
    char str[]="MADAM";
    int isPalin=1;
    int left=0;
    int right=strlen(str)-1;
    while(left<right)
    {
        if(str[left]!=str[right]){
        isPalin=0;
        break;
    }
    left++;
    right--;
}
    if(isPalin)
    printf("Palindrome String");
    else
    printf("Not a palindrome string");
}