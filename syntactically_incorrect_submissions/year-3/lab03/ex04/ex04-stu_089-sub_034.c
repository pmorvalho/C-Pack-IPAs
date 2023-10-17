

#include <stdio.h>

#define MAX 1000000

int main() {
    int c;
    int num[MAX];
    int i = 0;
    int esq_zero = 0;
    int primeiro_char;

    while ((c = getchar()) != EOF) {

        if(c == ' '){
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
        else if(c != '0')
            primeiro_char = 1;

        else if(c == '0' && primeiro_char == 0)
            esq_zero = 1;
        
        else if(primeiro_char == 1)
            putchar(c);
        
    }

    return 0;
}
