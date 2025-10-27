
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
        else if (a == '0' && (estado == PROCURA || estado == ZERO))
            estado = ZERO;
        else if (estado == ZERO && (a==' '|| a=='\n')){
            putchar('0');
            estado = PROCURA;
        }
        else{
            estado = PROCURA;
        }
        if (estado != ZERO)
            putchar(a);
    }
    if (estado == ZERO)
        putchar('0');
    return 0;
}