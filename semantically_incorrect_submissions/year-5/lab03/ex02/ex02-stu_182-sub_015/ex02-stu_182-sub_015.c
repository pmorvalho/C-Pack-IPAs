
#include <stdio.h>

void piramide(int N){
    int i, j;

    for(i = 0; i <= N; i++){
        for(j = 1; j <= 2 * (N- i); j++){
            printf(" ");
        }

        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }

        for(j = i -1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}



int main(){

    int N;
    scanf("%d", &N);
    if(N < 2){
        printf("O número tem que ser superior a 2\n");
        scanf("%d", &N);
    }
    piramide(N);
    return 0;
}