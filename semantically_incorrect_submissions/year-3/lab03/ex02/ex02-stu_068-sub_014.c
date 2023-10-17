
#include <stdio.h>

void piramide(int N){

    int contador, j;

    for (contador = 1; contador <= N; contador++){


        for (j = 1; j <= (N - contador); j++){
            printf("  ");
        }

        for (j = 1; j <= contador; j++){
            printf("%d ", j);
        }

        for (j = contador - 1; j >=1 ; j--){
            printf("%d ", j);
        }

        printf("\n");
    } 
    
}

int main(){

    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}