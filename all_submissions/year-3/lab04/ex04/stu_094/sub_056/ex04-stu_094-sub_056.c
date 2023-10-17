

#include <stdio.h>
#include <string.h>

#define MAX 80
#define NAO 0
#define SIM 1

int main () {

    char palavra[MAX];
    int i, len, estado = SIM;

    scanf("%s", palavra);

    len = strlen(palavra);

    for (i = 0; i < len/2; i++)
        if (palavra[i] != palavra[len - 1 - i])
            estado = NAO;

    if (estado)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}