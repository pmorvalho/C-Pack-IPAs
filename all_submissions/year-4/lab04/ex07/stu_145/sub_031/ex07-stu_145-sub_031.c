

#include <stdio.h>

#define DIMMAX 100

void apagaCaracter(char s[], char c) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            printf("%c", s[i]);
        }
        ++i;
    }
    printf("\n");
}

int main() {
    char s[DIMMAX];
    int i, current;
    while ((current = getchar()) != '\n') {
        s[i] = current;
        ++i;
    }
    s[i] = '\0';
    apagaCaracter(s, getchar());
    return 0;
}