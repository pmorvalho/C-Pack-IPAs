
#include <stdio.h>

void piramide(int DIM) {
    
    int linha, num, espacos;

    for (linha = 1; linha <= DIM; linha++) {
        espacos = DIM - linha;
        while (espacos-- > 0) {
            printf("  ");
        }
        for (num = 1; num <= linha; num++)
            printf("%d ", num);

        for (num = linha - 1; num >= 1; num--)
            printf("%d ", num);
        
        printf("\n");

    }
}

int main() {
    
    int dim;

    scanf("%d", &dim);

    piramide(dim);

    return 0;
}
