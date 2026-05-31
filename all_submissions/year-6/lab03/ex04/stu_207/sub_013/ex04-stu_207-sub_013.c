
#include <stdio.h>

int main(){
    int c;
    int numero = 0;
    int zero = 0;
    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            if (!numero && c == '0')
                zero = 1;
            else{
                putchar(c);
                numero = 1;
                zero = 0;
            }
        }
        else{
            if (zero){
                putchar('0');
                zero = 0;
            }
            numero = 0;
            putchar(c);
        }
    }
    return 0;
}