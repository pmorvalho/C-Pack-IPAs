

#include <stdio.h>

int digit(int c) {
    return c >= '0' && c <= '9'; 
}

int main() {
    int c, soma = 0;

    while ((c = getchar()) != EOF && c != '\n') 
        if(digit(c))
            soma += c - '0';
    printf("%s\n", soma % 9 ? "no" : "yes");

    return 0;
}