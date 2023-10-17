

#include <stdio.h>

int main(){
    int n, divisor, contador = 0;
    scanf("%d", &n);
    divisor = n;
    while (divisor > 0){
        if (n % divisor == 0)
            contador++;
        divisor--;
    }
    printf("%d", contador);
    return 0;
}