
#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    int i, len;

    char s[MAX];
    scanf("%s", s);

    len = strlen(s);
    for (i = 0; i < len; i++) {
        if (s[i] != s[len - i - 1])
            break;
    }
    if (i == len) 
        printf("yes\n");
    else 
        printf("no\n");
    return 0;
}