
#include <stdio.h>
int main()
{
    int valor, i, contador = 0;
    scanf("%d", &valor);
    for(i = 1; i <= valor; i++){
        if (valor%i == 0)
            contador += 1;
    }
    printf("%d\n", contador);
}