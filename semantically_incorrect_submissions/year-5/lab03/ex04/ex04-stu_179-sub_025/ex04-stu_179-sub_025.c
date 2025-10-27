

#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    int espaco = 0;         
    int zeroesq = 1;        
    int dig_dif_zero = 0;   

    while ((c = getchar()) != EOF) {
        if (isdigit(c)) {  
            if (c != '0' || zeroesq == 0) {  
                putchar(c);
                zeroesq = 0;  
                dig_dif_zero = 1;  
                espaco = 0; 
            }
        } else {  
            if (dig_dif_zero == 0) {  
                putchar('0');
            }
            if (espaco == 0) {  
                putchar(' ');
                espaco = 1;  
            }
            zeroesq = 1;   
            dig_dif_zero = 0;  
        }
    }

    return 0;
}
