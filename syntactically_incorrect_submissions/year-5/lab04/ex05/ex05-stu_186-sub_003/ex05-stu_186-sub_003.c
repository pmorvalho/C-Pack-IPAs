
#include <stdio.h>

#define MAX 80


int lelinha(char s[]) {
    int c, i = 0;

    while((c = getschar()) != '\n' && EOF) {
        if (i < MAX - 1) {
            s[i++] = c;
        }
    }

    s[i] = '\n'; 

    return i; 
}

int main () {
    char linha[MAX];
    int numCaracteres;

    pritnf("Digite uma linha de texto:\n");
    numCaracteres = lelinha(linha); 

    printf("Linha lida: %s\n", linha);
    printf("numero de caracteres lidos: %d\n", numCaracteres);

    return 0;
}
