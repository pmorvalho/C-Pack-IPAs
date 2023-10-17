

#include <stdio.h>

int digito(int c) {
    return c >= '0' && c <= '9'; 
}

int main() {
    int c, soma = 0;

    while ((c = getchar()) != EOF && c != '\n') 
        if(digito(c))
            soma += c - '0';
    printf("%s\n", soma % 9 ? "no" : "yes");

    return 0;
}