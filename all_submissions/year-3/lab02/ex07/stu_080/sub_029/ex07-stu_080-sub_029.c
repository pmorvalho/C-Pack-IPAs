
#include <stdio.h>
int main(){
    int contador = 0, divisores;
    int num;
    float resto;
    scanf("%d", &num);        
    for (divisores = 1; divisores <= num; divisores++){
        resto = num % divisores;
        if (resto == 0.0)
            contador++;
    }
    
    printf("%d\n", contador);
    return 0;
}