

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

int main() {
    char s[MAX];
    leLinha(s);
    printf("%s\n", s);
    return 0;
}