
#include <stdio.h>
int main(){
    int quantidade, i, valor, i1;
    scanf("%d", &quantidade);
    int valores[quantidade];
    for (i=0; i<quantidade; i++){
        scanf("%d", &valor);
        valores[i] = valor;
    }
    for (i=0; i<quantidade; i++){
        for (i1=0; i1<valores[i]; i1++){
            putchar('*');
        }
        printf("\n");
    }
    return 0;
}