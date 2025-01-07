
#include <stdio.h>

#define DIM 100

int lerLinha(char s[]);

int main() {
    char s[DIM];
    

    
    lerLinha(s);
    printf("%s\n", s);
    
    return 0;
}

int lerLinha(char s[]) {
    char c;
    int charContador = 0;

    while((c = getchar()) != '\n' && c != EOF && charContador < DIM - 1) {
        s[charContador++] = c;
    }
        s[charContador] = '\0';
    return charContador;
}
