
#include <stdio.h>
int main (){
    int numero,divisores;
    int contador=0;
    scanf("%d",&numero);
    for (divisores=numero;divisores>0;divisores--){
        if (numero%divisores==0)
            contador++;
    }
    printf("%d\n",contador);
    return 0;
}