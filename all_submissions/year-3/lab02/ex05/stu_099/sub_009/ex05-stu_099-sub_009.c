
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int contador = 1, limite;

    scanf("%d", &limite);

    while (contador <= limite) {
        printf("%d\n", contador);
        contador++;
    }
    
    return 0;
}
