
#include <stdio.h>
void piramide(int numero)
{
    int i1, i2, i3, i4,espacos;
    for (i1 = 1; i1<= numero; i1++){
        espacos = (numero - i1)*2;
        for (i4=1; i4<=espacos; i4++){
            printf(" ");
        }
        for (i2 = 1; i2 <= i1; i2++){
            printf(" %d", i2);
        }
        if (i1>1){
            for(i3 = i2-2; i3>=1; i3--){
                printf(" %d", i3);
            }
        }
        printf("\n");
    }
}
int main()
{
    int numero;
    scanf("%d", &numero);
    piramide(numero);
    return 0;
}