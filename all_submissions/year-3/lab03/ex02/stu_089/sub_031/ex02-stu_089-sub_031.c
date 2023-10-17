

#include <stdio.h>

void piramide (int N){

    int i = 1, contador1 = 0;
    int j = 1, k=0;
    while (i<=N)
    {
        for(contador1 = 0; contador1 < N - i; contador1++){
            printf(" ");
        }

        for(j = 1; j <= i; j ++){
            printf("%d ", j);
        }

        for(k= i-1; k > 0; k--){
            printf("%d ", k);
        }

        printf("\n");
        i++;
    }
    
}

int main(){

    int N=0;

    scanf("%d", &N);

    piramide(N);

    return 0;
}