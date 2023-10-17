

#include <stdio.h>
# define FORA 0
# define NUMERO   1
# define ZERO  2

void quadrado(int N){
    
    int linha,coluna,soma;
    soma = 0;
    
    if (N>=2) {
    
        for (coluna=1; coluna<=N; coluna++) {
            for (linha=1; linha<=N; linha++) {
                printf("%d\t",linha+soma);
            }
            putchar('\n');
            soma++;
        }
    }
}

void piramide(int N){
    
    char espaco = ' ';
    int num_char,space_linha,andares,num_por_linha,cont,aux;
    
    num_char = N*4-3;
    
    for (andares=1; andares<=N; andares++) {
        
        num_por_linha= andares*2-1;
        space_linha = (num_char-num_por_linha-(andares*2-2))/2;
        cont = aux = 1;
        
        while (num_por_linha!=0 ) {
            
            
            if (space_linha!=0) {
                printf("%c",espaco);
                space_linha--;
            }
            else if (num_por_linha!=0){
                if (cont<=andares) {
                    printf("%d%c",cont,espaco);
                    num_por_linha--;
                    cont++;
                    aux = cont-1;
                }
                else{
                    aux--;
                    printf("%d%c",aux,espaco);
                    num_por_linha--;
                }
            }
        }
        printf("\n");
    }
}



int main(){
    int estado;
    int c;
    
    estado = FORA;
    while ((c=getchar())!=EOF) {
    
        if (estado==FORA && (c>'0'&& c<='9')) {
            putchar(c);
            estado=NUMERO;
        }
        else if (estado==NUMERO && (c==' '||c=='\n')){
            putchar(c);
            estado=FORA;
        }
        else if(estado==FORA && c=='0'){
            estado=ZERO;
        }
        else if (estado==ZERO && (c==' '|| c=='\n')){
            estado=FORA;
            printf("0%c",c);
        }
        else if (estado==ZERO && (c>'0'&& c<='9')){
            putchar(c);
            estado=NUMERO;
        }
        else if (estado==NUMERO || estado==FORA)
            putchar(c);
    }
    return 0;
}
