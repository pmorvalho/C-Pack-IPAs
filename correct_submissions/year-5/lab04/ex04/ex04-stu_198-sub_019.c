
#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    int i, j, slen;
    char s[MAX], s2[MAX];
    fgets(s, MAX, stdin);
    slen = strlen(s);
    if (s[slen - 1] == '\n') {
        s[slen - 1] = '\0';
        slen--;
    }
    for (i = 0, j = slen - 1; j >= 0; i++, j--) {
        s2[i] = s[j];
    }
    s2[slen] = '\0';
    if (strcmp(s, s2) == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}