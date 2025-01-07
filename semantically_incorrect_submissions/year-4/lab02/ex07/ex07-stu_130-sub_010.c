
#include <stdio.h>

int main(){
    int n, i = 1, contador = 0;

    scanf("%d", &n);
    while (i <= n){
        if (n % i == 0){
            contador++;
        }
        i++;
    }
    printf("%d", contador);
    return 0;
    }