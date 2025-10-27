

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int contador=1;
    while (contador<=num){
        printf("%d\n", contador);
        contador++;
    }
    return 0;
}

