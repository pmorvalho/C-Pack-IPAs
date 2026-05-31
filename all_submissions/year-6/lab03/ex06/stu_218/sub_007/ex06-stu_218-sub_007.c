
#include <stdio.h>

int main() {
    int soma = 0;
    char c;

    
    while (scanf(" %c", &c) == 1 && c >= '0' && c <= '9') {
        soma += c & 15; 
    }


    return puts("no\0yes" + !(soma % 9) * 3), 0; 
}