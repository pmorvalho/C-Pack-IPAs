
#include <stdio.h>

void quadrado(int DIM) {

    int contador, linha, num;
    
    for (linha = 1; linha <= DIM; linha++) {
        num = linha;
        for (contador = 0; contador < DIM; contador++) {
            if (contador == DIM - 1) {
                printf("%d\n", num++);
                break;
            }
            printf("%d\t", num++);
        }
    }
}


int main() {
    
    int dim;
    scanf("%d", &dim);

    quadrado(dim);

    return 0;
}
