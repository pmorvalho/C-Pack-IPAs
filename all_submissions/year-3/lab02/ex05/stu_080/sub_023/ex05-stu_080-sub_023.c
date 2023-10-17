
#include <stdio.h>
int main(){
    int num;
    int contador;
    scanf("%d", &num);
    for (contador = 1; contador <= num; contador++)
        printf("%d\n", contador);
    return 0;
}