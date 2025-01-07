
#include <stdio.h>

void piramide(int N){
    int lin, col, colneg, espaco;
    if (N < 2){
        printf("Digite um número maior que 2\n");
        return;
    }
    for (lin = 1; lin <= N; lin++){
        for (espaco = 1; espaco <= (2*(N - lin)); espaco++)
                printf(" ");
        for (col = 1; col <= lin; col++)
            printf("%d ", col);
        for (colneg = lin - 1; colneg >= 1; colneg--)
            printf("%d ", colneg);
        printf("\n");
    }
}

int main(){
    int N;

    scanf("%d", &N);

    piramide(N);

    return 0;
}
