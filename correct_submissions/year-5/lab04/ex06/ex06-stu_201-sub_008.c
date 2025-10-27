
#include <stdio.h>
#define MAX 80

int leLinha(char s[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n' && c != '\0'; ++i) s[i] = c;
    s[i + 1] = '\0';
    return i;
}

void maisculas(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        if ('a' <= s[i] && s[i] <= 'z') 
            s[i] += 'A' - 'a';
}

int main() {
    char s[MAX];
    leLinha(s);

    maisculas(s);

    printf("%s\n", s);
    return 0;
}