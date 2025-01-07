
#include <stdio.h>
#define DIM 100
#define FORA 0
#define DENTRO 1
#define BLASHT 1
#define BLASHF 0


int main(void) {
    int c;
    char charAnterior;
    int i = 0;
    char s[DIM];
    int estado = FORA;

    while((c = getchar()) != EOF && c != '\n'){ 
        
        
        if(c == '\n' || c == '\t' || c == ' '){
            estado = FORA;
            
        }
        else if(c == '"' && estado == FORA){
            estado = DENTRO;
            
            
        }
        else if(c == '"' && estado == DENTRO){
            printf("entrou");
            charAnterior = c;
        
            c = getchar();
            if(c == ' '){
                estado = FORA;
                s[i] = '\n';
            }
            else{
                s[i] = charAnterior;
                ++i;
                s[i] = c;
            }

        }
        else if(c == '\\'){
            charAnterior = c;
            c = getchar();
            if(c == '\\'){
                s[i] = charAnterior;
                ++i;
                s[i] = c;
            }
        }
        else if(estado == DENTRO){
           
            s[i] = c;
        }
        ++i;
    }
    s[i] = '\0';
    printf("%s",s);
    return 0;
}