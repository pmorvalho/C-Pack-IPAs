
#include <stdio.h>
int main(){
    int N, i = 1, contador = 0;
    
    printf("Introduza um numero inteiro:\n");
    scanf("%d", &N);

    while(i <= N){
        if(N % i == 0){
            contador++;
        }
        i++;
    }
    printf("%d\n", contador);
    return 0;
}