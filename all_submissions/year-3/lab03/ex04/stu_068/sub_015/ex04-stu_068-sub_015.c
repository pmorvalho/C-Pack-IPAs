
#include <stdio.h>

int main(){

    #define Fora 0
    #define Dentro 1
    int c, zero_comeco = Dentro;
    
    
    

    while ((c = getchar())!= EOF ){
        
        if (c <= 9 && c >= 1){
            putchar(c);
            zero_comeco = Fora;
        }
        else if (c == '0' && zero_comeco == Fora)
            putchar(c);

        else if (c == '0' && zero_comeco == Dentro)
            continue;

        else 
            putchar(c);    

    }
    
    
    
    
    return 0;

}