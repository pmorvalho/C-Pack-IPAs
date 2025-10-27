

#include <stdio.h>

int main(){
    int a, contador, i;
    contador = 0;
    scanf("%d", &a);
    for (i=1; i<=a; i++){
        if(a%i == 0)
            contador++;
    }
        printf("%d\n",contador);
    return 0;
}