
#include <stdio.h>
#define PROCURA 0
#define ZERO 1
#define NUM 2
int main(){
    char a;
    int estado = PROCURA;
    while ((a = getchar()) != EOF){
        if ((a>'0'&& a<='9')||(estado == NUM && a == '0')){
            estado = NUM;
        }
        else if (a == '0' && estado == PROCURA)
            estado = ZERO;
        else{
            estado = PROCURA;
        }
        if (estado != ZERO)
            putchar(a);
        else if (estado == ZERO && (a<'0'&&a>'9')){
            printf("0%c",a);
            estado = PROCURA;
        }
        if (estado == ZERO)
            putchar('0');
    }
    return 0;
}