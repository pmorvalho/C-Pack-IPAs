

#include <stdio.h>

int main(){

    int c, num = 0, total = 0, sinal = 1;

    while ((c = getchar()) != '\n'){

        if (c >= '0' && c <= '9'){
            num = num * 10 + (c - '0');
        }
        else if (c == ' '){
            total += num * sinal;
            num = 0;
        }
        else if (c == '+'){
            sinal = 1;
        }
        else if (c == '-'){
            sinal = -1;
        }
    }
    total += num * sinal;
    printf("%d\n", total);
    
    return 0;
}