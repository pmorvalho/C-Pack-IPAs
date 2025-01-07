
#include <stdio.h>

int main(){
    int num, aux;
    int contador;

    scanf("%d",&num);
    aux = num;

    while (aux >= 1){
        
        if (num % aux == 0){
            contador++;
        }
        aux--;
    }

    printf("%d\n",contador);

    return 0;
}