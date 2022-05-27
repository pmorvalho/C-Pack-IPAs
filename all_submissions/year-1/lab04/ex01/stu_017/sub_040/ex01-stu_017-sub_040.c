#include <stdio.h>

#define VECMAX 100

int main() {
    int n, v[VECMAX], contador, cont_ast;

    scanf("%d", &n);

    for (contador = 0; contador < n; contador++) {
        scanf("%d", &v[contador]);
    }

    for (contador = 0; contador < n; contador++) {
        for (cont_ast = 0; cont_ast < v[contador]; cont_ast++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;

    
}