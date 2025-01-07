
#include <stdio.h>

int main(){
    int num, espaco,zero;
    char c;

    c = getchar();
    espaco = 1;
    while (c != EOF){
        
        if ('1'<= c && c <='9'){
            num = 1;
            espaco = 0;
            zero = 0;
            putchar(c);
        }

        if (c == ' '){
            if (espaco == 0){
                putchar(' ');
            }
            if (num == 0 && zero == 1){
                putchar('0');
                putchar(' ');
            }
            num = 0;
            espaco = 1;
        }
        if (c == '0'){
            if (espaco == 0){      
                putchar('0');
            }
            zero = 1;
        }
        c = getchar();
    }

    return 0;
}
