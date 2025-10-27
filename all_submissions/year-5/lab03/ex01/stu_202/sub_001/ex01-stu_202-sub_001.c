

#include <stdio.h>

void quadrado (int N){
    if (N<2){
        printf("ovalor de n tem que ser maior ou igua a 2\n");
        return;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            printf ("%d\t", i + j + 1);
        }
        printf("\n");
    }
}

int main(){
    
    int N;
    scanf("%d", &N);

    quadrado (N);


    return 0;
}