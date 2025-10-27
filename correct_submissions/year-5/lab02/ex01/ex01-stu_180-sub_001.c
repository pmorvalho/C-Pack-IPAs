
#include <stdio.h>

int main(){
    int num, maior=0;
    int contador=0;
    while (contador<3){
        scanf("%d", &num);
        contador++;
        if (num>maior){
            maior=num;
        }
    }
    
    printf("%d\n", maior);
    return 0;
}