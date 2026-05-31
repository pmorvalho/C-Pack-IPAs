
#include <stdio.h>

int main(){
    int n, contador = 0;
    scanf("%d", &n);
    i=n;
    while (i > 0){
        if (n % i == 0)
            contador++;
        i--;
    }
    printf("%d\n", contador);
    return 0;
}