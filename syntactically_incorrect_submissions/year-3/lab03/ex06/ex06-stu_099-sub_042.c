
#include <stdio.h>
#include <ctype.h>

#define DIM 100
#define ZERO '0'

int main(int argc, char const *argv[])
{
    int numero, soma_dig = 0;

    while ((numero = getchar()) != '\n')
    {
        soma_dig += numero - ZERO;
    }
    
    if (soma_dig % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
