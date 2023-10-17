
#include <stdio.h>
int main(){
    int contador = 0, divisores = 1;
    int num;
    float resto;
    scanf("%d", &num);
    resto = num % divisores;
    while (divisores < num){
        if (resto == 0.0)
            contador++;
        divisores++;
    }
    printf("%d\n", contador);
    return 0;
}