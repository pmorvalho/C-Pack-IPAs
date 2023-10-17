
#include <stdio.h>

void quadrado(){

    int contador, n, i, num=1;
    scanf("%d", &n);
    for (contador = 1; contador <= n; contador++){
        num = contador;
        for (i = 1; i <= n; i++){
            printf("%d\t", num);
            num++;
        }
    printf("\n");
    }   

}

int main(){
    
    quadrado();
    return 0;

}