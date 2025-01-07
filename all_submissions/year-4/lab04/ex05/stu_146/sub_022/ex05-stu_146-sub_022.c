

#include <stdio.h>
#include <string.h>
#define MAX 1000

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != EOF || (c = getchar()) != '\n') {
        s[i] = putchar(c);
        i++;
    }
    s[i] = '\0';
    return i;
}

int main() {
    char s[MAX];
    leLinha(s);
    printf("%s", s);
    return 0;
}