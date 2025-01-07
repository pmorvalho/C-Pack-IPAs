
#include <stdio.h>
#include <string.h>
#define TAMANHO_MAXIMO 100
int main()
{
    int i, tamanho;
    char caracter[TAMANHO_MAXIMO];
    scanf("%s", caracter);
    tamanho = strlen(caracter);
    for (i = 0; i < tamanho; i++){
        printf("%c\n", caracter[i]);
    }
    return 0;
}
