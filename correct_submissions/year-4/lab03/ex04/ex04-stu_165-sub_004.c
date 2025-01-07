
enum state {FORA, DENTRO, ZERO}; 
#include <stdio.h>

int non_zero(char c){
    return c >= '1' && c <= '9'; 
}
int spc(char c){
    return c == ' ' || c == '\n' || c == EOF;
}


int main(){
    char c;
    enum state st = FORA;

    while ((c = getchar()) != EOF){
        if ((st == FORA)){
            if (non_zero(c)) {
                putchar(c);
                st = DENTRO;
            } else if (spc(c)) {
                putchar(c);
            } else if (c == '0') {
                st = ZERO;
            }
        } else if (st == DENTRO) {
            if (non_zero(c)) {
                putchar(c);
            } else if (spc(c)) {
                st = FORA;
                putchar(c);
            } else if (c == '0') {
                putchar(c);
            }
        } else if (st == ZERO) {
            if (non_zero(c)) {
                st = DENTRO;
                putchar(c);
            } else if (spc(c)) {
                st = FORA;
                putchar('0');
                putchar(c);
            } else if (c == '0') {}
        }
    }
    if (st == ZERO)
    putchar('0');

    return 0;
}