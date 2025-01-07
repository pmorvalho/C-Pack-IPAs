
#include <stdio.h>

int main(){

    int maior = 0;
    int valor;

    for(int counter = 0; counter < 3; counter++){
        scanf("%d", &valor);
        if( valor > maior){
            maior = valor;
        }
    }
    return maior;
}