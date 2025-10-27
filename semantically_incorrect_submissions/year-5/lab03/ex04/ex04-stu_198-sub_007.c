
#include <stdio.h>
#define ON 1
#define OFF 0

int main() {
    int state = OFF, zero = OFF;
    int c = getchar();
    while(c != EOF) {
        
        
        if(state == OFF && (c == ' ' || c == '\t' || c == '\n' )){
            putchar(c);
            c = getchar();
        }else if(state == OFF && c == '0'){
            zero = ON;
            c = getchar();
        }
        if (state == OFF && c >= '1' && c <= '9'){
            state = ON;
            zero = OFF;
            putchar(c);
            c = getchar();
        }
        if (state == ON && c >= '0' && c <= '9'){
            putchar(c);
            c = getchar();
        }
        if(state == ON && (c == ' ' || c == '\t' || c == '\n')){
            state = OFF;            
            putchar(c);
            c = getchar();
        }
        if (zero == ON && state == OFF && (c == ' ' || c == '\t' || c == '\n')){
            zero = OFF;
            putchar('0');
            putchar(c);
            c = getchar();
        }
    }

    return 0;
}