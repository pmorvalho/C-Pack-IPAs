

#include <stdio.h>
#define TAM 100

int leLinha(char s[]) {
    int tam = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[tam] = c;  
        tam++;
    }

    s[tam] = '\0';
    return tam; 
}


int main(){

    char frase[TAM];

    int tamanho = leLinha(frase);
    
    for (int i = 0; i < tamanho; i++){
        putchar(frase[i]);
    }
    putchar('\n');
    return 0;
}