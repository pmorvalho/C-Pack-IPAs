
#include <stdio.h>

void piramide(int N){
    int i, j, k, m;

    for (i = 1; i <= N; i++){
        for (j = 1; j <= N-i; j++){
            printf ("  "); 
        }

        for (k = 1; k <= i; k++){
            if (k == i){
                printf("%d", k);
            }
            else{
                printf("%d ", k);
            }
        }

        for(m = i - 1; m >= 1; m--){
            printf(" %d",m);
        }

        printf ("\n");
    }

}


int main(){

    int N;
    scanf("%d", &N);
    while(N < 2){
        printf("O número tem que ser superior a 2\n");
        scanf("%d", &N);
    }
    piramide(N);
    return 0;
}