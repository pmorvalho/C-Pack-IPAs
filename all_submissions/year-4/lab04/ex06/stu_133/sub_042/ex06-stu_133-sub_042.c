
#include <stdio.h>

#define DIM 1000
#define MAIUSCULA_OFFSET 32

void maiusculas(char s[]);

int main() {
    char s[DIM];

    fgets(s, DIM, stdin);
    maiusculas(s);
    printf("%s", s);    
    return 0;
}

void maiusculas(char s[]) {
    char c;
    int i = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= MAIUSCULA_OFFSET;
        }
    }
}