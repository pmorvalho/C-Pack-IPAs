
#include <stdio.h>

int main(){
    int valor1, valor2, valor3, temp;

    scanf("%d%d%d", &valor1, &valor2, &valor3);

    if(valor2 < valor1){
        temp = valor2;
        valor2 = valor1;
        valor1 = temp;
    }

    if(valor1 > valor3){
        temp = valor3;
        valor3 = valor1;
        valor1 = temp;
    }

    if(valor2 > valor3){
        temp = valor3;
        valor3 = valor2;
        valor2 = temp;
    }

    printf("%d %d %d\n", valor1, valor2, valor3);
    return 0;
}