

#include <stdio.h>

int leLinha(char s[]) {
    int len = 0;
    while (s[len] != EOF && s[len] != '\n') {
        len++;
    }
    len++;
    return len;
}

int main() {
    char c;
    while ((c = getchar()) != EOF && (c != '\n')) {
        printf("%c", c);
    }
    putchar('\n');
}
