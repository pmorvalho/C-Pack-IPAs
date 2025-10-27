
#include <stdio.h>
#define FORA 0
#define DENTRO 1
#define ADICIONAR 1
#define SUBTRAIR 0
int main(){
    int n1=0,total=0,c,correspondente,estado=DENTRO,conta=ADICIONAR;
    while((c=getchar())!='\n'){
        if(c!=' ' && estado==DENTRO){
            correspondente= c-'0';
            n1= (n1*10)+correspondente;
        }else if(c==' '){
            if(estado==FORA){
                n1=0;
                estado = DENTRO;
            }else{
                estado=FORA;
                if(conta==ADICIONAR){
                    total+=n1;
                }else{
                    total-=n1;
                }
            }
        }else if(c=='+'){
            conta=ADICIONAR;
        }else{
            conta=SUBTRAIR;

        }
    }
    if(conta==ADICIONAR){
        printf("%d\n",total+n1);
    }else{
        printf("%d\n",total-n1);

    }

    return 0;
}