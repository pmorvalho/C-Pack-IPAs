
#include <stdio.h>

#define MAX 80

int leLinha(char linha[]) {
    int num_char;
    for (num_char = 0; linha[num_char] != '\0'; num_char++) {}
    return num_char;
}

int main () {
    int i, c;
    char linha[MAX];
    for (i = 0; (c=getchar()) != '\n' && c != EOF; i++) {
        linha[i] = c;
    }

    linha[i] = '\0';
    leLinha(linha);

    printf("%s\n", linha);

    return 0;
}