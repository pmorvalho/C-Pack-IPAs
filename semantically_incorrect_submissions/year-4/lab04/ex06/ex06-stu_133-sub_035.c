
#include <stdio.h>

#define DIM 1000

void maiusculas(char s[]);

int main() {
    char s[DIM];

    fgets(s, DIM, stdin);
    maiusculas(s);
    printf("%s", s);    
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