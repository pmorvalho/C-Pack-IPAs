
#include <stdio.h>
#define MAX 80

int leLinha(char s[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n' && c != '\0'; ++i) s[i] = c;
    s[i + 1] = '\0';
    return i;
}

void apagaCaracter(char s[], char c) {
    int i, advance = 0;
    for (i = 0; s[i + advance] != '\0';) {
        if (s[i + advance] == c)
            ++advance;
        else {
            s[i] = s[i + advance];
            ++i;
        }
    }
    s[i] = '\0';
}

int main() {
    char s[MAX], c;

    leLinha(s);
    if (scanf("%c", &c) != 1) return 1;

    apagaCaracter(s, c);

    printf("%s\n", s);
    return 0;
}