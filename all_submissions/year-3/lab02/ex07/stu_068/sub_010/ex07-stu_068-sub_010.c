
#include <stdio.h>

int main(){

    int contador =1, v, resultado = 0;

    scanf("%d", &v);
    while (contador <= v){
        if ((v % contador) == 0)
            resultado++;
        contador++;
    }
    printf("%d\n", resultado);
    return 0;
}