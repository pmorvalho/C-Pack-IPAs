
#include <stdio.h>
#include <string.h>

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

int main() {
    int size;
    char s[80];

    size = leLinha(s);
    printf("%s\n", s);

    return 0;
}