

#include <stdio.h>

int main(){

    int divisor,contador, n;
 
    scanf("%d", &n);

    for (divisor = 1, contador= 0; divisor <= n; divisor++){
        if (n % divisor == 0)
            contador++;
    }
    printf("%d\n", contador);

    return 0;
}