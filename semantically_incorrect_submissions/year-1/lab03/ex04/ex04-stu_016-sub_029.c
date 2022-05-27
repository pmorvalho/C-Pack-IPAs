#include <stdio.h>

int main(){
    int c, sequencia = 0, zero = 0;
    while((c = getchar()) != EOF){
        if(c == ' ') {
            if(zero == 1) {
                printf("%c", '0');
                zero = 0;
            }
            printf("%c", c);
            sequencia = 0;
        } else if(c == '0') {
            if(sequencia == 1) printf("%c", c);
            else zero = 1;
        } else {
            if(c == '\n') {
                if(zero == 1) printf("%c", '0');
            } else {
                printf("%c", c);
                sequencia = 1;
                zero = 0;
            }
        }
    }
    return 0;
}
