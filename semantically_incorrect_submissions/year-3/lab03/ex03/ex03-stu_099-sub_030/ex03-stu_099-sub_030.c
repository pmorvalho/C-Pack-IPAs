
#include <stdio.h>

void cruz(int DIM) {

    int i, linha, pos_max = DIM - 1;
    char separador = '-';

    for (linha = 0; linha <= pos_max; linha++)
    {
        for (i = 0; i <= pos_max; i++){
            if (i == linha) {
                printf("*");
            } else if (i == pos_max - linha) {
                printf("*");
            } else {
                printf("%c", separador);
            }
            printf(" ");
        }
        printf("\n");
    }
    
}

int main()
{
    int dim;
    scanf("%d", &dim);

    cruz(dim);
    
    return 0;
}
