
#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    int i, len;

    char s[MAX];
    scanf("%s", s);

    for (len = 0; s[len] != '\0'; len++);
    for (i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            break;

    if (i == len/2)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}