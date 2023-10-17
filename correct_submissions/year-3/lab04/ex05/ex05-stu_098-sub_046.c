

#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main() {

    char s[MAX];

    leLinha(s);

    printf("%s\n", s);

    return 0;
}

int leLinha(char s[]) {

    int c, i = 0;

    c = getchar();
    while (c != EOF && c != '\n' && i < MAX - 1) {
        s[i] = c;
        i++;
        c = getchar();
    }
    s[i] = '\0';

    return i;
}