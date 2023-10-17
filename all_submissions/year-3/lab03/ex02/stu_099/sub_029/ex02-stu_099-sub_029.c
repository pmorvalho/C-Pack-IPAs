
#include <stdio.h>

void piramide(int DIM) {
    
    int linha, num, espacos;

    for (linha = 1; linha <= DIM; linha++) {
        espacos = DIM - linha;
        while (espacos-- > 0) {
            printf("  ");
        }

        printf("1");
        for (num = 2; num < linha; num++)
            printf(" %d", num);

        for (num = linha; num >= 1; num--)
            if (linha != 1)
                printf(" %d", num);
            
        printf("\n");

    }
}

int main() {
    
    int dim;
    scanf("%d", &dim);

    piramide(dim);

    return 0;
}
