

#include <stdio.h>

int main(){

    int n;
    int contador = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        if(n % i == 0){
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}
