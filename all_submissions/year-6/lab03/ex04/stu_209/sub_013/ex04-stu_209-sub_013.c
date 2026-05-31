

#include <stdio.h>


int main(){

    #define FORA 1
    #define DENTRO 0
    #define ZERO 2
    #define SEMZERO 3
    
    int c,estado=FORA,zero=SEMZERO;
    while ((c=getchar())!=EOF) {
        
        if( c== '0' && estado==FORA) {zero= ZERO;}

        if(c == ' ' || c == '\n' || c == '\t') {
            
            if(zero==ZERO){ putchar('0');}
            
            estado= FORA;
            putchar(c);
        }

        if (c!='0'&& !(c == ' ' || c == '\n' || c == '\t') ){
            estado=DENTRO;
            zero= SEMZERO;
            putchar(c);
        }
        
         if(c=='0' && estado == DENTRO) { putchar(c);}

    }
        return 0;
    }

        
