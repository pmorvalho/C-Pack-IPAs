
#include <stdio.h>
#include <string.h>

void leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }
}

void apagaCaracter(char s[], char c) {
    int i, j;

    for (i = 0, j = 0; i <= strlen(s); i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main() {
    char s[80], c;

    leLinha(s);
    scanf("%c", &c);
    apagaCaracter(s,c);
    printf("%s\n", s);

    return 0;
}