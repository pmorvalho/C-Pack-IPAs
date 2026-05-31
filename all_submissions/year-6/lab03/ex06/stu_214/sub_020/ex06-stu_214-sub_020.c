
#include <stdio.h>

int main(){
    int c, soma = 0;

    while ((c = getchar()) >= '0' && c <= '9') {
        soma += c - '0';
    }

    printf(soma % 9 == 0 ? "yes\n" : "no\n");
    
    return 0;
}
