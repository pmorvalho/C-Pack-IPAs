

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

void maiusculas(char s[]) {
    int i, c = 'A';
    for (i = 0; c != '\0'; i++) {
        c = s[i];
        if (c >= 'a' && c <= 'z') {
            s[i] = c - ('a' - 'A');
        }
    }
}

int main() {
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}