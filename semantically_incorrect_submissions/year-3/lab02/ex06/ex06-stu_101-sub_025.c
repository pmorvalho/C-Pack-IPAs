

#include <stdio.h>

int main(){
    int n, valor, menor, maior;
    scanf("%d\n", &n);
    scanf("%d\n", &valor);
    menor=maior=valor;
    while(n>0){
        scanf("%d\n", &valor);
        if(valor>maior)
            valor = maior;
        if(valor<menor)
            valor = menor;
        n--;
    }
    return 0;
}
