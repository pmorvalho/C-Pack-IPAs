
#include <stdio.h>
void cruz(int numero)
{
    int i1, i2;
    char caracter;
    for (i1 = 1; i1 <= numero; i1++){
        for (i2 = 1; i2 <= numero; i2++){
            if (i2 == i1 || i2 == numero - i1 + 1){
                caracter = '*';
            }
            else{
                caracter = '-';
            }
            if (i2 == 1){
            printf("%c", caracter);
            }
            else{
                printf(" %c", caracter);
            }
        }
        putchar('\n');
    }
}
int main()
{
    int numero;
    scanf("%d", &numero);
    cruz(numero);
    return 0;
}