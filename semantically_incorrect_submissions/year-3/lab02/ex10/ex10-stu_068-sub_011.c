
#include <stdio.h>

int main(){
    int soma =0, v, contador=0, x;
    scanf("%d", &v);
    while (v >= 0){
        x = v % 10;
        v = v / 10;
        soma += x;
        contador++;

    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}