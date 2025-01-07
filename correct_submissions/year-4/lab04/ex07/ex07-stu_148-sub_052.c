
#include <stdio.h>

#define MAX 80

void apagaCaracter(char linha[], char letra) {
    int i, novo_i = 0;
    for (i = 0; linha[i] != '\0'; i++){
        if (linha[i] != letra) 
            linha[novo_i++] = linha[i];
    }
    linha[novo_i] = '\0';
}

int main () {
    int i, c;
    char linha[MAX], letra;

    for (i = 0; (c=getchar()) != '\n' && c != EOF; i++) {
        linha[i] = c;
    }
    letra = getchar();

    linha[i] = '\0';
    apagaCaracter(linha, letra);

    printf("%s\n", linha);

    return 0;
}