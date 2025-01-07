
#include <stdio.h>

#define MAX 80

void maiusculas(char linha[]) {
    int i;
    for (i = 0; linha[i] != '\0'; i++) {
        if (linha[i] >= 97 && linha[i] <= 122)
            linha[i] -= 32;
    }
}

int main () {
    int i, c;
    char linha[MAX];
    for (i = 0; (c=getchar()) != '\n' && c != EOF; i++) {
        linha[i] = c;
    }

    linha[i] = '\0';
    maiusculas(linha);

    printf("%s\n", linha);

    return 0;
}