
#include <stdio.h>

int main(){
    int num = 0, espaco = 1,zero = 0;
    char c;

    c = getchar();
    while (c != EOF){
        
        if ('1'<= c && c <='9'){
            num = 1;
            espaco = 0;
            zero = 0;
            putchar(c);
        }

        else if (c == ' '){
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
        else if (c == '0'){
            if (espaco == 0){      
                putchar('0');
            }
            zero = 1;
        }
        else if ((c == '\n') || (c == '\t')){
            espaco = 1;
            putchar(c);
        }
        c = getchar();
    }
    printf("\n");

    return 0;
}
