

#include <stdio.h>

#define MAX 1000000

int main() {
    int c;
    int esq_zero = 0;
    int primeiro_char = 0;

    while ((c = getchar()) != EOF) {

        if(c == ' ' || c == '\n'){
            if(primeiro_char == 0 && esq_zero == 1){
                printf("0 ");
                esq_zero = 0;
            }
            else{
                putchar(c);
                primeiro_char = 0;
                esq_zero = 0;
            }
        }
        if(c != '0' && c != ' ')
            primeiro_char = 1;

        if(c == '0' && primeiro_char == 0)
            esq_zero = 1;
        
        if(primeiro_char == 1  && c!= ' ')
            putchar(c);
        
    }

    return 0;
}

