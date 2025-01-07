
#include <stdio.h>

void piramide(int N){
    int lin, col, colneg, espaco;

    for (lin = 1; lin <= N; lin++){
        for (espaco = 1; espaco <= (2*(N - lin)); espaco++)
                printf(" ");
        for (col = 1; col <= lin; col++)
            printf("%d ", col);
        for (colneg = lin - 1; colneg >= 1; colneg--){
            printf("%d", colneg);
            if (colneg > 1)
                putchar(' ');
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
