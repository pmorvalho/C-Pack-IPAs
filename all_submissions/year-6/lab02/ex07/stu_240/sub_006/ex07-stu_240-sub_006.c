
#include <stdio.h>

int main(){
    int num;
    int contador = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            contador++;
        }
    }
    printf("%d\n", contador);
    
    return 0;
}