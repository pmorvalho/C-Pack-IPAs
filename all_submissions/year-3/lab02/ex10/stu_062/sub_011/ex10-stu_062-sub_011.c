
#include <stdio.h>

int main () {

    int n;

    int c, soma = 0;

    do {
        n = getchar();
            soma = soma + n;
            c++;
        
    } while (getchar() != EOF);

    printf("%d\n%d\n", c, soma);

    return 0;

}