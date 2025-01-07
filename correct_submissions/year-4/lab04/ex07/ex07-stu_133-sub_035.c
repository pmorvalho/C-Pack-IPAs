
#include <stdio.h>

#define DIM 1000

void apagaCaracter(char s[], char c);

int main() {
    char s[DIM], c;

    fgets(s, DIM, stdin);
    scanf("%c", &c);
    apagaCaracter(s, c);
    printf("%s", s);    
    return 0;
}

void apagaCaracter(char s[], char c) {
    int i = 0, j = 0;

    for (i = 0; s[i] != '\0'; i++, j++) {
        if (s[i] == c) {
            for (j = i; s[j] != '\0'; j++) {
                s[j] = s[j + 1];
            }
            i--;
        }
    }   
}