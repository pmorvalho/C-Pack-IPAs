

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    char s[80];
    int len, i;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < (len/2); i++) {
        if (s[i] != s[len-1-i]) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}

