
#include <stdio.h>
#define MAX_CHARS 100
#define DIVISOR 9

int main(){
    char c;
    int c_2, i, soma = 0;

    for (i = 0; i < 100 && (c = getchar()) >= '0' && c <= '9'; i++){
        c_2 = c - 48;
        soma += c_2;
    }

    if ((soma % DIVISOR) == 0)
        printf("yes\n");
    else        
        printf("no\n");

    return 0;
}