
#include <stdio.h>
#include <string.h>
#define MAX 80
#define PALINDROMO 0
#define NAO_PALINDROMO 1

int main(){
    char palavra[MAX];
    int tamanho, i, estado = PALINDROMO;
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    for (i = 0; i <= tamanho / 2; i++){
        if ( palavra[i] != palavra[tamanho-i-1])
        estado = NAO_PALINDROMO;
        break;
    }
    if (estado == PALINDROMO)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}