

#include <stdio.h>

#define DIM 100
#define A_MINUSCULO 97
#define Z_MINUSCULO 122
#define e_minusculo(A) (A_MINUSCULO <= A && A <= Z_MINUSCULO)
#define maiusculo(A) (A -= 32)

void maisculas(char s[]) {
    int i = 0;
    while (s[i] != EOF && s[i] != '\n' && s[i] != '\0') {
        if (e_minusculo(s[i]))
            maiusculo(s[i]);
        i++;
    }
    s[i+1] = '\n';
    s[i+2] = '\0';
}

int main() {
    char c, s[DIM];
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n' && c != '\0') {
        s[i] = c;
        i++;
    }
    s[i+1] = '\n';
    maisculas(s);
    printf("%s\n", s);
    return 0;
}
