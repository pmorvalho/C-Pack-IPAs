#include <stdio.h>

int main(){
    int num, i, maior;
    maior = 0;
    for(i = 1; i <= 3; ++i){
        printf("Insira um número: ");
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("O maior número é: %d\n", maior);
    return 0;
}