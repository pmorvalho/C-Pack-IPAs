

#include <stdio.h>

int main() {

    int soma = 0, contador = 1;
    char c;

    c = getchar();

    while (c != '\n' && c != EOF && contador < 100) {
        soma += c - '0';
        contador++;
        c = getchar();
    }
    
    if (soma % 9 == 0)
        puts("yes");
    else
        puts("no");

    return 0;
}