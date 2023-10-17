

#include <stdio.h>

int main() {
    int c, soma = 0;

    while ((c = getchar()) != EOF)
        soma += c;
    if (soma % 9 == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}