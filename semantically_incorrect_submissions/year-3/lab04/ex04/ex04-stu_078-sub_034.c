

#include <stdio.h>
#include <string.h>

#define MAX 80

int isPal(char s[]);

int main() {
    char s[MAX];
    scanf("%s", s);
    printf("%s\n", isPal(s) ? "yes" : "no");
    return 0;
}

int isPal(char s[]) {
    int i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
        if (s[i] != s[j])
            return 0;
    return 1;
}