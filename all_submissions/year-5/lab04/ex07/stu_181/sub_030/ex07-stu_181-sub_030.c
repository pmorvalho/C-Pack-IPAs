

#include <stdio.h>

#define DIM 100
#define fim_de_str(A) ((A != EOF) && (A != '\n') && (A != '\0'))

void caracterParaEsquerda(char s[], int n) {
    int i = n;
    while (fim_de_str(s[i])) {
        s[i] = s[i+1];
        i++;
    }
    s[i] = s[i+1];
}

void apagaCaracter(char s[], char c) {
    int i = 0;
    while (fim_de_str(s[i])) {
        if (s[i] == c) {
            caracterParaEsquerda(s, i);
        }
        i++;
    }
}

int main() {
    char s[DIM], c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n' && c != '\0') {
        s[i] = c;
        i++;
    }
    s[i+1] = '\0';
    scanf("%c", &c);
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}
