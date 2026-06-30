#include <stdio.h>
#include <string.h>

int main() {
    char str[]="C is easy to learn";
    int i, count =0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] != ' ' && str[i] != '\n' && str[i - 1] == ' ')) {
            count++;
        }
    }
    printf("Number of words = %d", count);
    return 0;
}