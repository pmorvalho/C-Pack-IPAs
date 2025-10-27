
#include <stdio.h>
#define ON 1
#define OFF 0


int main() {
    int c, state = OFF;
    c = getchar();
    while (c != EOF){
        if (c =='\\'){
            c = getchar();
            if( c != EOF){
                putchar(c);
                c = getchar();
            }

        }else if (c == ' ' && state == OFF){
            c = getchar();
        }else if (state == OFF && c == '"'){
            state = ON;
            
            c = getchar();

        }else if (state == ON && c != '"' && c != '\\' ){
            putchar(c);
            c = getchar();

        }else if (state == ON && c == '"'){
            state = OFF;
            c = getchar();
            if (c != EOF){
                putchar('\n');
            }

        }
    }
    return 0;
}