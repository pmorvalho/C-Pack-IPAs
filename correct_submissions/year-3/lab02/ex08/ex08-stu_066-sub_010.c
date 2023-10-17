
#include <stdio.h>
int main (){
    float numeros,contador;
    float numero,media=0;
    scanf("%f",&numeros);
    for (contador=0;contador<numeros;contador++){
        scanf("%f",&numero);
        media+=numero;
    }
    media=media/numeros;
    printf("%.2f\n",media);
    return 0;
}