
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dim, contador, linha, num;

    scanf("%d", &dim);

    for (linha = 1; linha <= dim; linha++) {
        num = linha;
        for (contador = 0; contador < dim; contador++) {
            if (contador == dim - 1) {
                printf("%d\n", num++);
                break;
            }
            printf("%d\t", num++);
        }
    }
    return 0;
}
