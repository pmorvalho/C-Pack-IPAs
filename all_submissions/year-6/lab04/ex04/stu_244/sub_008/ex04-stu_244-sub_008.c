
#include <stdio.h>
#include <string.h>
#define MAX 80
#define CERTO 1
#define ERRADO 0

int main() {
    char palavra[MAX];
    int i, tamanho, estado=CERTO;
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    for(i=0; i<tamanho/2;i++) {
        if (palavra[i]!=palavra[tamanho-1-i]) {
            estado = ERRADO;
            break;
        }
    }
    if(estado==CERTO)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}