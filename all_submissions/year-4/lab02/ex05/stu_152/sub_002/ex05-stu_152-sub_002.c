
#include <stdio.h>

int main(){ 
    int num;
    int contador = 0;

    scanf("%d",&num);

    while (contador++ < num){
        printf("%d\n",contador);
    }

    return 0;
}