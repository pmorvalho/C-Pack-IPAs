
#include <stdio.h>
#include <string.h>

#define DIM 1000

void maiusculas(char s[]);

int main() {
    char s[DIM], length;

    fgets(s, DIM, stdin);
    maiusculas(s);
    printf("%s", s);
    length = strlen(s);
    if (s[length - 1] != '\n') {
        putchar('\n');
    }  
    return 0;
}

void maiusculas(char s[]) {
    int i = 0, maiusculaOffset = 'A' - 'a';

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] += maiusculaOffset;
        }
    }
}