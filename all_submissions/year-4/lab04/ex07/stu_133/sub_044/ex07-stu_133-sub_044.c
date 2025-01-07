
#include <stdio.h>

#define DIM 1000

void apagaCaracter(char s[], char c);

int main() {
    char s[DIM], c;

    fgets(s, DIM, stdin);
    scanf("%c", &c);
    apagaCaracter(s, c);  
    return 0;
}

void apagaCaracter(char s[], char c) {
    int i = 0, j = 0;

    for (i = 0; s[i] != '\0'; i++, j++) {
        if (s[i] != c) {
            printf("%c", s[i]);
        }
    }
}   