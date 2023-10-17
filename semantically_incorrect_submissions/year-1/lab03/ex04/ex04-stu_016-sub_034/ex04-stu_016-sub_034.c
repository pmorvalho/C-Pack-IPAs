#include <stdio.h>

int main(){
    int c, sequencia = 0;
    while((c = getchar()) != EOF){
        if(c == ' ') {
            printf("%c", c);
            sequencia = 0;
        } else if(c == '0') {
            if(sequencia == 1) printf("%c", c);
        } else {
            printf("%c", c);
            sequencia = 1;
        }
    }
    return 0;
}
