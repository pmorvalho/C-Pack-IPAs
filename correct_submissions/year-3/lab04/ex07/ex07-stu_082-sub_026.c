

#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int c, comprimento = 0;
    c = getchar();
    while (c != '\n' && c != EOF) {
        s[comprimento] = c;
        comprimento++;
        c = getchar();
    }
    s[comprimento] = '\0';
    return comprimento;
}

void apagaCaracter(char s[], char c) {
    int i, lshift = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            lshift++;
        } else {
            s[i - lshift] = s[i];
        }
    }
    s[i - lshift] = '\0';
}

int main() {
    char s[MAX], c;
    leLinha(s);
    c = getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}