
#include <stdio.h>

#define MAX 80
#define MAIUSCULAS ('a' - 'A')

int leLinha(char s[]) {
    int i = 0, c;

    for (i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}


void substituiletra(char s[], char c) {
    int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            for (j = i; s[j] != '\0'; j++) {
                s[j] = s[j + 1];
            }
    }
}


int main() {
    char linha[MAX], c;

    leLinha(linha);
    scanf("%c", &c);

    substituiletra(linha, c);

    printf("%s\n", linha);

    return 0;
}