

#include <stdio.h>

int main(){
    int n, valor, menor, maior;
    scanf("%d\n", &n);
    scanf("%d\n", &valor);
    menor=valor;
    maior=valor;
    while(n>0){
        scanf("%d\n", &valor);
        if(valor>maior)
            maior=valor;
        if(valor<menor)
            menor=valor;
        n--;
    }
    return 0;
}
