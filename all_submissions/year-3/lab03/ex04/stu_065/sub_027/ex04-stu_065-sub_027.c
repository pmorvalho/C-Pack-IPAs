
#include <stdio.h>
#define SIZE 200 
#define DENTRO 1
#define FORA 0

int main(){
    int i, tab[SIZE], estado=FORA;
    for (i=0; i<SIZE; i++)
        tab[i] = getchar();
    
    for (i=0; i<SIZE; i++){
        if (tab[i]==' ' || tab[i]== '\n' || tab[i] == '\t'){
            estado = FORA;
            printf("%c", tab[i]);
        }
        else if (tab[i]=='0'){
            if (estado == DENTRO || tab[i+1]==' ' || tab[i+1]== '\n' || tab[i+1] == '\t' )
                printf("%c", tab[i]);
        }
        else if (tab[i]=='\0')
            break;

        else {
            estado = DENTRO;
            printf("%c", tab[i]);
        }
    }

    return 0;

}