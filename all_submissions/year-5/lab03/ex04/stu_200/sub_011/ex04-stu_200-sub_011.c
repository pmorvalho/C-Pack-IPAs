
#include <stdio.h>
#define PROCURA 0
#define ZERO 1
#define NUM 2
int main(){
    char a;
    int estado = PROCURA;
    while ((a = getchar()) != EOF){
        if (a>'0'&& a<='9'){
            estado = NUM;
            putchar(a);
        }
        else if (a == '0')
            estado = ZERO;
        else{
            if (estado == ZERO)
                printf("0%c",a);
            else
                putchar(a);
            estado = PROCURA;
        }
    }
    return 0;
}