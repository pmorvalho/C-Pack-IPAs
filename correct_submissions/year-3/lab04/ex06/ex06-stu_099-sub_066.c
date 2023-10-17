
#include <stdio.h>

#define MAX 80
#define MAIUSCULAS ('a' - 'A')

int leLinha(char s[]) {
    int i = 0, c;

    for (i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}


void maiusculas(char s[]) {
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= MAIUSCULAS;
    }
}


int main() {
    char linha[MAX];

    leLinha(linha);
    maiusculas(linha);

    printf("%s\n", linha);

    return 0;
}
