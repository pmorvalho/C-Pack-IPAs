
#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i = 0, c;

    while ((c = getchar()) != '\n' && c != EOF) s[i++] = c;
    s += '\0';

    return i;
}

int main() {
    char s[MAX];

    leLinha(s);
    printf("%s\n", s);

    return 0;
}