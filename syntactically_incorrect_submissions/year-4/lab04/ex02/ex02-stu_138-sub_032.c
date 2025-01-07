
#include <stdio.h>
int main(){
    int quantidade, i, valor, maior = 0, i1;
    scanf("%d", &quantidade);
    int valores[quantidade];
    for (i=0; i<quantidade; i++){
        scanf("%d", &valor);
        valores[i] = valor;
        if (valor > maior){
            maior = valor;
        }
    }
    for (i=1; i<=maior; i++){
        for (i1=0; i1<quantidade; i1++){
            if (valores[i1] >= i){
                putchar('*');
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}