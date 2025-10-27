

#include <stdio.h>
#define TAM 100

int leLinha(char s[]) {
    int tam = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[tam] = c;  
        tam++;
    }

    return tam; 
}


int main(){

    char frase[TAM];

    int tamanho = leLinha(frase);
    
    for (int i = 0; i < tamanho; i++){
        putchar(frase[i]);
    }

    return 0;
}