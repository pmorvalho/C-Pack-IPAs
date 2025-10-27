
#include <stdio.h>

#define LIMITE 100

int main() {
    int c, contador = 0, soma = 0;

    while ((c = getchar()) != EOF && c != '\n' && contador++ < LIMITE)
        soma += c - '0';
        
    printf(soma % 9 == 0 ? "yes\n" : "no\n");
    return 0;
}