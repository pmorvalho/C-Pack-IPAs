
#include <stdio.h>



void piramide(int N){

    for (int i = 1; i <= N; i++){

        for (int j = 0; j < (N * 2 - i * 2); j++){
            printf(" ");
        }
        for (int j = 1; j < i; j++){
            printf("%d ", j);
        }
        printf("%d", i);
        for (int  j = i - 1; j >= 1; j--){
            printf(" %d", j);
        }
        printf("\n");
    }
}



int main(){
    int N;

    scanf("%d", &N);

    while (N < 2){
        scanf("%d", &N);
    }

    piramide(N);
    return 0;
}