
#include <stdio.h>
#include <string.h>
#define MAX 80

void apagaCaracter (char s[], char c);
int leLinha(char s[]);

int main () {
    char s[MAX];
    leLinha(s);
    apagaCaracter(s, getchar());
    printf("%s\n", s);
    return 0;
}

void apagaCaracter (char s[], char c) {
    int size, i, j = strlen(s);
    while (--j) {
        if (s[j] == c) {
            size = strlen(s);
            for (i = j; i < size; i++) s[i] = s[i + 1]; 
        }
    }
}

int leLinha(char s[]) {
    int i = 0;
    char current = getchar();
    while (current != EOF && current != '\n') {
        s[i++] = current; current = getchar();
    }
    return i;
}
