
#include <stdio.h>

#define IN 0
#define OUT 1

int main(){
    int c;
    int state = OUT;
    int zeros = OUT;

    while((c = getchar()) != EOF){
        if(state == IN){
            if(c >= '0' && c <= '9'){
                putchar(c);
            }

            if(c == ' ' || c == '\n'){
                state = OUT;
                printf(" ");
            }
        }
        if(state == OUT){
            if( c > '0' && c <= '9'){
                state = IN;
                putchar(c);
            }

            if(zeros == OUT){
                if(c == '0'){
                    zeros = IN;
                }
            }
            if(zeros == IN){
                if(c > '0' && c <= '9'){
                    zeros = OUT;
                }
                if(c == ' ' || c == '\n'){
                    zeros = OUT;
                    putchar('0');
                    printf(" ");
                }
            }
        }

    }

    return 0;

}