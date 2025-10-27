
#include <stdio.h>

int main(){
    int c = 0, b = 0, a = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (b){
                putchar('0');
            }
            if(a){
                printf(" ");
            }
            b = 0;
        }   
        else {
            if (c == '0'){
                b = 1;
            }
            if(c >= '1' && c <= '9'){
                printf("%c", c);
                b = 0;
            }
        }
        a = 1;
    }
    if (b){
        putchar('0');
    }
    return 0;
}