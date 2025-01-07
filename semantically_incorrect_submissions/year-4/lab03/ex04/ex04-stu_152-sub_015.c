
#include <stdio.h>

int main(){
    char c;
    int num = 0, espaco = 1, zero = 0;

    while ((c = getchar()) != EOF){
        
        if (c >= '1' && c <= '9'){ 
            num = 1;
            espaco = 0;
            zero = 0;
            putchar(c);
        }

        
        else if(c == '0'){
            if (num == 1){
                putchar(c);
            }
            else if(num == 0){
                zero = 1;
            }
            espaco = 0;
        }
        
        else if(c == '\n' || c == ' '){
            if (espaco == 0){
                if (zero == 1){
                    putchar('0');
                }
                putchar(' ');
            }
            espaco = 1;
            zero = 0;
            num = 0;
        }
    }
    printf("\n");


    return 0;
}