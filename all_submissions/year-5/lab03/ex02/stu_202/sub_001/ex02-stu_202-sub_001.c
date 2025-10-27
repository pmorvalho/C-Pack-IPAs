

#include <stdio.h>

void piramide(int N){
    
    if(N<2){
        printf("o valor tem que ser igual ou superior a 2.\n");
        return;
    }

    for (int i=1; i<=N; i++){
        for (int j=0; j<N-i; j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");  
    }
}

int main(){

    int N;

    scanf("%d", &N);

    piramide (N);

    return 0;
}