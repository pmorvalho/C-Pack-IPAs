
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n_total, contador = 0;
    float numero, media = 0;

    scanf("%d", &n_total);
    while (contador < n_total)
    {
        scanf("%f", &numero);
        media += numero;
        contador++;
    }

    media /= n_total;
    printf("%.2f\n", media);
    
    return 0;
}
