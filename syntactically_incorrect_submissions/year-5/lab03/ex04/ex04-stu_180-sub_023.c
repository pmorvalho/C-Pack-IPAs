

#include <stdio.h>
#define DENTRO 1
#define FORA 0

int main(){
    char C;
    C=getchar();
    int estado=FORA;
    while(C!='\n'){
        if (C==' '){
            putchar(C);
            C=getchar();
            estado=FORA;
        }
        else if('1'<=C && C<='9'){
            putchar(C);
            C=getchar();
            estado=DENTRO;
        }
        else if (estado==DENTRO){
            putchar(C);
            C=getchar();
        }
        else {
            C=getchar();
            if(C==' '){
                putchar('0');
            }
        }

    }
}