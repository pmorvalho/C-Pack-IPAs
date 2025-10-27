#include <stdio.h>
#define FORA 0
#define DENTRO 1
#define ATIVO 1
#define DESATIVO 0

int main () {
    int c, estado = FORA,back=DESATIVO;
    while ((c = getchar()) != EOF) {
        if(back==ATIVO){
            putchar(c);
            back=DESATIVO;
        }else{
            if(estado==FORA){
                if(c!='\\' ){
                    if(c=='\"'){
                        estado=DENTRO;
                    }
                }
            }else{
                if(c!='\\'){
                    if(c=='\"'){
                        putchar('\n');
                        estado=FORA;
                    }else{
                        putchar(c);
                    }
                }else{
                    back=ATIVO;
                }
            }
        }
    }   
    return 0;
}