
#include <stdio.h>


#define DENTRO 0
#define FORA 1
#define ZERO 2
#define NZERO 3
int main() {
    int estado = FORA;
    int estado2 = NZERO; 
    int c; 

    
    while ((c = getchar()) != EOF) {
        
        if (c >= '0' && c <= '9') {
            
            if (c=='0'){
                estado = ZERO;  
            }
            if (estado == FORA && c == '0' && estado2 == ZERO) {
                    continue;
            }
            if (c==' ' && estado2==ZERO){
                putchar(c);
                estado2=ZERO;
            }
            putchar(c); 
            estado = DENTRO; 
            estado2=NZERO;
            
        } else {
            
            if (estado == DENTRO) {
                putchar(' '); 
                estado = FORA;
                estado2=NZERO;
            }
        }
    }

    return 0;
}