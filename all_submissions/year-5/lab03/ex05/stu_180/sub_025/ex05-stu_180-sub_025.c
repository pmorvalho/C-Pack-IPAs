

#include <stdio.h>
#define DENTRO 1
#define FORA 0

int main(){
    int C;
    int estado=0;

    C=getchar();

    while(C!='\n'){
        if (C=='"'){
            C=getchar();
            if (C==' '){
                estado=FORA;
                printf("\n");
                C=getchar();
            }
            else{
                if(C!='\n'){
                    putchar(C);
                    C=getchar();
                    estado=DENTRO;  
                }
            }
        }
        else if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z')){
            putchar(C);
            C=getchar();
        }
        else if (estado==DENTRO){
            if (C == ' '){
                putchar(C);
                C=getchar();
            }
            else{
                C=getchar();
                if(C!='\n'){
                    putchar(C);
                    C=getchar();
                }
            }
        }
    }
    printf("\n");
    return 0;
}