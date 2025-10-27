
#include <stdio.h>
#define ESPECIAL 1
#define ESCREVER 2
#define PROCURA 3
int main(){
    char a;
    int estado = PROCURA;
    while ((a = getchar())!= EOF){
        if (estado == PROCURA && a == '"')
            estado = ESCREVER;
        else if (estado == ESCREVER && a == 92)
            estado = ESPECIAL;
        else if (estado == ESPECIAL){
            putchar(a);
            estado = ESCREVER;
        }
        else if (estado == ESCREVER && a == '"'){
            printf("\n");
            estado = PROCURA;
        }
        else if (estado == ESCREVER)
            putchar(a);
    }
    return 0;
}