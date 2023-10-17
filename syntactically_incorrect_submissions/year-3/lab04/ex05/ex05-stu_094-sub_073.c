

#include <stdio.h>

#define MAX 80

int leLinha (char s[]) {

    int c, i;

    for (i = 0; i < MAX && (c = getchar()) != '\n' && c != EOF) {
        s[i] = c;
    }

    s[i] = '\0';
    return i;
}

int main () {

    char s[MAX];

    leLinha(s);
    printf("%s\n", s);

    return 0;
}