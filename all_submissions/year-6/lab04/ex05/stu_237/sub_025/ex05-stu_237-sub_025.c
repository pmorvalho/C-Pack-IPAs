
#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i, contador;
    i = contador = 0;
    
    while (s[i] != '\n' && s[i] != '\0' && i < MAX) {
        i++;
        contador++;
    }

    return contador;
}

int main() {
    char s[MAX];
    int tamanho;
    int i;

    scanf("%s", s);

    tamanho = leLinha(s);

    for (i = 0; i < tamanho; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}