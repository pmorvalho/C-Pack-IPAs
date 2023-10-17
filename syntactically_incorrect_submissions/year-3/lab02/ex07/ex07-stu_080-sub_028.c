
#include <stdio.h>
int main(){
    int contador = 0, divisores = 1;
    int num;
    float resto;
    scanf("%d", &num);        
    resto = num % divisores;
    for(divisores; divisores <= num; divisores++){
        if (resto == 0.0)
            contador++;
    }
    
    printf("%d\n", contador);
    return 0;
}